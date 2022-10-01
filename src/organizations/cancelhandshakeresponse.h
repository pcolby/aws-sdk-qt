// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELHANDSHAKERESPONSE_H
#define QTAWS_CANCELHANDSHAKERESPONSE_H

#include "organizationsresponse.h"
#include "cancelhandshakerequest.h"

namespace QtAws {
namespace Organizations {

class CancelHandshakeResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT CancelHandshakeResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    CancelHandshakeResponse(const CancelHandshakeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelHandshakeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelHandshakeResponse)
    Q_DISABLE_COPY(CancelHandshakeResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
