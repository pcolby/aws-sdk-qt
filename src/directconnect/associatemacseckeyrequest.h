// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMACSECKEYREQUEST_H
#define QTAWS_ASSOCIATEMACSECKEYREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateMacSecKeyRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateMacSecKeyRequest : public DirectConnectRequest {

public:
    AssociateMacSecKeyRequest(const AssociateMacSecKeyRequest &other);
    AssociateMacSecKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMacSecKeyRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
