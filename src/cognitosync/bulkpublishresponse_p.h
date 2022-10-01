// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BULKPUBLISHRESPONSE_P_H
#define QTAWS_BULKPUBLISHRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class BulkPublishResponse;

class BulkPublishResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit BulkPublishResponsePrivate(BulkPublishResponse * const q);

    void parseBulkPublishResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BulkPublishResponse)
    Q_DISABLE_COPY(BulkPublishResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
