// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BULKPUBLISHRESPONSE_H
#define QTAWS_BULKPUBLISHRESPONSE_H

#include "cognitosyncresponse.h"
#include "bulkpublishrequest.h"

namespace QtAws {
namespace CognitoSync {

class BulkPublishResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT BulkPublishResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    BulkPublishResponse(const BulkPublishRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BulkPublishRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BulkPublishResponse)
    Q_DISABLE_COPY(BulkPublishResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
