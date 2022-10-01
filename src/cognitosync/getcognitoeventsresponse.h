// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOGNITOEVENTSRESPONSE_H
#define QTAWS_GETCOGNITOEVENTSRESPONSE_H

#include "cognitosyncresponse.h"
#include "getcognitoeventsrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetCognitoEventsResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT GetCognitoEventsResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    GetCognitoEventsResponse(const GetCognitoEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCognitoEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCognitoEventsResponse)
    Q_DISABLE_COPY(GetCognitoEventsResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
