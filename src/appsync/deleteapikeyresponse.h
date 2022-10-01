// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIKEYRESPONSE_H
#define QTAWS_DELETEAPIKEYRESPONSE_H

#include "appsyncresponse.h"
#include "deleteapikeyrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteApiKeyResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteApiKeyResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteApiKeyResponse(const DeleteApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiKeyResponse)
    Q_DISABLE_COPY(DeleteApiKeyResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
