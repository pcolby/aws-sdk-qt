// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRUSTANCHORRESPONSE_H
#define QTAWS_DISABLETRUSTANCHORRESPONSE_H

#include "rolesanywhereresponse.h"
#include "disabletrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableTrustAnchorResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT DisableTrustAnchorResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    DisableTrustAnchorResponse(const DisableTrustAnchorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableTrustAnchorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableTrustAnchorResponse)
    Q_DISABLE_COPY(DisableTrustAnchorResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
