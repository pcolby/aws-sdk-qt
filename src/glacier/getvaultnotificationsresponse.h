// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTNOTIFICATIONSRESPONSE_H
#define QTAWS_GETVAULTNOTIFICATIONSRESPONSE_H

#include "glacierresponse.h"
#include "getvaultnotificationsrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultNotificationsResponsePrivate;

class QTAWSGLACIER_EXPORT GetVaultNotificationsResponse : public GlacierResponse {
    Q_OBJECT

public:
    GetVaultNotificationsResponse(const GetVaultNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVaultNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVaultNotificationsResponse)
    Q_DISABLE_COPY(GetVaultNotificationsResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
