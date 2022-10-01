// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTHANDSHAKERESPONSE_H
#define QTAWS_ACCEPTHANDSHAKERESPONSE_H

#include "organizationsresponse.h"
#include "accepthandshakerequest.h"

namespace QtAws {
namespace Organizations {

class AcceptHandshakeResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT AcceptHandshakeResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    AcceptHandshakeResponse(const AcceptHandshakeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptHandshakeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptHandshakeResponse)
    Q_DISABLE_COPY(AcceptHandshakeResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
