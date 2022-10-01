// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEHANDSHAKERESPONSE_H
#define QTAWS_DECLINEHANDSHAKERESPONSE_H

#include "organizationsresponse.h"
#include "declinehandshakerequest.h"

namespace QtAws {
namespace Organizations {

class DeclineHandshakeResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DeclineHandshakeResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DeclineHandshakeResponse(const DeclineHandshakeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeclineHandshakeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeclineHandshakeResponse)
    Q_DISABLE_COPY(DeclineHandshakeResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
