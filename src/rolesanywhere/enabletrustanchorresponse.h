// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRUSTANCHORRESPONSE_H
#define QTAWS_ENABLETRUSTANCHORRESPONSE_H

#include "rolesanywhereresponse.h"
#include "enabletrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableTrustAnchorResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT EnableTrustAnchorResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    EnableTrustAnchorResponse(const EnableTrustAnchorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableTrustAnchorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableTrustAnchorResponse)
    Q_DISABLE_COPY(EnableTrustAnchorResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
