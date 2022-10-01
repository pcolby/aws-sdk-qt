// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETCOGNITOEVENTSRESPONSE_H
#define QTAWS_SETCOGNITOEVENTSRESPONSE_H

#include "cognitosyncresponse.h"
#include "setcognitoeventsrequest.h"

namespace QtAws {
namespace CognitoSync {

class SetCognitoEventsResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT SetCognitoEventsResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    SetCognitoEventsResponse(const SetCognitoEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetCognitoEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetCognitoEventsResponse)
    Q_DISABLE_COPY(SetCognitoEventsResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
