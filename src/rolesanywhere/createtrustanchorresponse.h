// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTANCHORRESPONSE_H
#define QTAWS_CREATETRUSTANCHORRESPONSE_H

#include "rolesanywhereresponse.h"
#include "createtrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateTrustAnchorResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT CreateTrustAnchorResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    CreateTrustAnchorResponse(const CreateTrustAnchorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrustAnchorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrustAnchorResponse)
    Q_DISABLE_COPY(CreateTrustAnchorResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
