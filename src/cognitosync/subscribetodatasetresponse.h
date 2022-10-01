// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETODATASETRESPONSE_H
#define QTAWS_SUBSCRIBETODATASETRESPONSE_H

#include "cognitosyncresponse.h"
#include "subscribetodatasetrequest.h"

namespace QtAws {
namespace CognitoSync {

class SubscribeToDatasetResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT SubscribeToDatasetResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    SubscribeToDatasetResponse(const SubscribeToDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubscribeToDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeToDatasetResponse)
    Q_DISABLE_COPY(SubscribeToDatasetResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
