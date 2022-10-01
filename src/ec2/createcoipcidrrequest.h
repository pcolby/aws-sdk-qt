// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPCIDRREQUEST_H
#define QTAWS_CREATECOIPCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipCidrRequestPrivate;

class QTAWSEC2_EXPORT CreateCoipCidrRequest : public Ec2Request {

public:
    CreateCoipCidrRequest(const CreateCoipCidrRequest &other);
    CreateCoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
