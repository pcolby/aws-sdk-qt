// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTANCHORRESPONSE_H
#define QTAWS_UPDATETRUSTANCHORRESPONSE_H

#include "rolesanywhereresponse.h"
#include "updatetrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateTrustAnchorResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT UpdateTrustAnchorResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    UpdateTrustAnchorResponse(const UpdateTrustAnchorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrustAnchorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrustAnchorResponse)
    Q_DISABLE_COPY(UpdateTrustAnchorResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
