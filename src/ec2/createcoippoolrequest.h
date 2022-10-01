// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPPOOLREQUEST_H
#define QTAWS_CREATECOIPPOOLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipPoolRequestPrivate;

class QTAWSEC2_EXPORT CreateCoipPoolRequest : public Ec2Request {

public:
    CreateCoipPoolRequest(const CreateCoipPoolRequest &other);
    CreateCoipPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoipPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
