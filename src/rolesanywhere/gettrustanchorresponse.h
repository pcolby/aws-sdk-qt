// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTANCHORRESPONSE_H
#define QTAWS_GETTRUSTANCHORRESPONSE_H

#include "rolesanywhereresponse.h"
#include "gettrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetTrustAnchorResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT GetTrustAnchorResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    GetTrustAnchorResponse(const GetTrustAnchorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrustAnchorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrustAnchorResponse)
    Q_DISABLE_COPY(GetTrustAnchorResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
