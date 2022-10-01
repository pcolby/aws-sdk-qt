// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEHEALTHCHECKREQUEST_H
#define QTAWS_DISASSOCIATEHEALTHCHECKREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DisassociateHealthCheckRequestPrivate;

class QTAWSSHIELD_EXPORT DisassociateHealthCheckRequest : public ShieldRequest {

public:
    DisassociateHealthCheckRequest(const DisassociateHealthCheckRequest &other);
    DisassociateHealthCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateHealthCheckRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
