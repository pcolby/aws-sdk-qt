// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETODATASETRESPONSE_P_H
#define QTAWS_SUBSCRIBETODATASETRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class SubscribeToDatasetResponse;

class SubscribeToDatasetResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit SubscribeToDatasetResponsePrivate(SubscribeToDatasetResponse * const q);

    void parseSubscribeToDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubscribeToDatasetResponse)
    Q_DISABLE_COPY(SubscribeToDatasetResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
