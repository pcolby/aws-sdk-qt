// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTANCHORRESPONSE_H
#define QTAWS_DELETETRUSTANCHORRESPONSE_H

#include "rolesanywhereresponse.h"
#include "deletetrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteTrustAnchorResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT DeleteTrustAnchorResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    DeleteTrustAnchorResponse(const DeleteTrustAnchorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrustAnchorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrustAnchorResponse)
    Q_DISABLE_COPY(DeleteTrustAnchorResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
