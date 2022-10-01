// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMACSECKEYREQUEST_H
#define QTAWS_DISASSOCIATEMACSECKEYREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateMacSecKeyRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DisassociateMacSecKeyRequest : public DirectConnectRequest {

public:
    DisassociateMacSecKeyRequest(const DisassociateMacSecKeyRequest &other);
    DisassociateMacSecKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMacSecKeyRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
