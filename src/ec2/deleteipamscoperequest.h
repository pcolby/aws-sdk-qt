// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMSCOPEREQUEST_H
#define QTAWS_DELETEIPAMSCOPEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamScopeRequestPrivate;

class QTAWSEC2_EXPORT DeleteIpamScopeRequest : public Ec2Request {

public:
    DeleteIpamScopeRequest(const DeleteIpamScopeRequest &other);
    DeleteIpamScopeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
