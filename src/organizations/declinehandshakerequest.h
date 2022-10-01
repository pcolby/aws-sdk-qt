// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEHANDSHAKEREQUEST_H
#define QTAWS_DECLINEHANDSHAKEREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DeclineHandshakeRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DeclineHandshakeRequest : public OrganizationsRequest {

public:
    DeclineHandshakeRequest(const DeclineHandshakeRequest &other);
    DeclineHandshakeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeclineHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
