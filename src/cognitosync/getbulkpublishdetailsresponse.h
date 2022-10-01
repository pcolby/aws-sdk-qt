// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKPUBLISHDETAILSRESPONSE_H
#define QTAWS_GETBULKPUBLISHDETAILSRESPONSE_H

#include "cognitosyncresponse.h"
#include "getbulkpublishdetailsrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetBulkPublishDetailsResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT GetBulkPublishDetailsResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    GetBulkPublishDetailsResponse(const GetBulkPublishDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBulkPublishDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBulkPublishDetailsResponse)
    Q_DISABLE_COPY(GetBulkPublishDetailsResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
