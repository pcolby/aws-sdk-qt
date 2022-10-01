// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKPUBLISHDETAILSRESPONSE_P_H
#define QTAWS_GETBULKPUBLISHDETAILSRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class GetBulkPublishDetailsResponse;

class GetBulkPublishDetailsResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit GetBulkPublishDetailsResponsePrivate(GetBulkPublishDetailsResponse * const q);

    void parseGetBulkPublishDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBulkPublishDetailsResponse)
    Q_DISABLE_COPY(GetBulkPublishDetailsResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
