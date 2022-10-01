// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTNOTIFICATIONSRESPONSE_H
#define QTAWS_DELETEVAULTNOTIFICATIONSRESPONSE_H

#include "glacierresponse.h"
#include "deletevaultnotificationsrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultNotificationsResponsePrivate;

class QTAWSGLACIER_EXPORT DeleteVaultNotificationsResponse : public GlacierResponse {
    Q_OBJECT

public:
    DeleteVaultNotificationsResponse(const DeleteVaultNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVaultNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVaultNotificationsResponse)
    Q_DISABLE_COPY(DeleteVaultNotificationsResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
