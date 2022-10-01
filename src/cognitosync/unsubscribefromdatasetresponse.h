// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMDATASETRESPONSE_H
#define QTAWS_UNSUBSCRIBEFROMDATASETRESPONSE_H

#include "cognitosyncresponse.h"
#include "unsubscribefromdatasetrequest.h"

namespace QtAws {
namespace CognitoSync {

class UnsubscribeFromDatasetResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT UnsubscribeFromDatasetResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    UnsubscribeFromDatasetResponse(const UnsubscribeFromDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnsubscribeFromDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnsubscribeFromDatasetResponse)
    Q_DISABLE_COPY(UnsubscribeFromDatasetResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
