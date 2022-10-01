// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPPOOLREQUEST_H
#define QTAWS_DELETECOIPPOOLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipPoolRequestPrivate;

class QTAWSEC2_EXPORT DeleteCoipPoolRequest : public Ec2Request {

public:
    DeleteCoipPoolRequest(const DeleteCoipPoolRequest &other);
    DeleteCoipPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoipPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
