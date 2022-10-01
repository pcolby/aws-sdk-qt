// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTROLEREQUEST_H
#define QTAWS_DISASSOCIATEDRTROLEREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTRoleRequestPrivate;

class QTAWSSHIELD_EXPORT DisassociateDRTRoleRequest : public ShieldRequest {

public:
    DisassociateDRTRoleRequest(const DisassociateDRTRoleRequest &other);
    DisassociateDRTRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDRTRoleRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
