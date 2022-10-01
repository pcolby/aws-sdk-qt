// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMPOOLREQUEST_H
#define QTAWS_DELETEIPAMPOOLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamPoolRequestPrivate;

class QTAWSEC2_EXPORT DeleteIpamPoolRequest : public Ec2Request {

public:
    DeleteIpamPoolRequest(const DeleteIpamPoolRequest &other);
    DeleteIpamPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
