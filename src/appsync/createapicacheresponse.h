// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPICACHERESPONSE_H
#define QTAWS_CREATEAPICACHERESPONSE_H

#include "appsyncresponse.h"
#include "createapicacherequest.h"

namespace QtAws {
namespace AppSync {

class CreateApiCacheResponsePrivate;

class QTAWSAPPSYNC_EXPORT CreateApiCacheResponse : public AppSyncResponse {
    Q_OBJECT

public:
    CreateApiCacheResponse(const CreateApiCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApiCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiCacheResponse)
    Q_DISABLE_COPY(CreateApiCacheResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
