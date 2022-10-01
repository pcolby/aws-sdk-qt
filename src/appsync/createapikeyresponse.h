// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIKEYRESPONSE_H
#define QTAWS_CREATEAPIKEYRESPONSE_H

#include "appsyncresponse.h"
#include "createapikeyrequest.h"

namespace QtAws {
namespace AppSync {

class CreateApiKeyResponsePrivate;

class QTAWSAPPSYNC_EXPORT CreateApiKeyResponse : public AppSyncResponse {
    Q_OBJECT

public:
    CreateApiKeyResponse(const CreateApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiKeyResponse)
    Q_DISABLE_COPY(CreateApiKeyResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
