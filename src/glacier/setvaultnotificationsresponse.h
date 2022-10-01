// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTNOTIFICATIONSRESPONSE_H
#define QTAWS_SETVAULTNOTIFICATIONSRESPONSE_H

#include "glacierresponse.h"
#include "setvaultnotificationsrequest.h"

namespace QtAws {
namespace Glacier {

class SetVaultNotificationsResponsePrivate;

class QTAWSGLACIER_EXPORT SetVaultNotificationsResponse : public GlacierResponse {
    Q_OBJECT

public:
    SetVaultNotificationsResponse(const SetVaultNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetVaultNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVaultNotificationsResponse)
    Q_DISABLE_COPY(SetVaultNotificationsResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
