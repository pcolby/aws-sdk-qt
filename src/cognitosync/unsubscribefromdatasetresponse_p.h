// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMDATASETRESPONSE_P_H
#define QTAWS_UNSUBSCRIBEFROMDATASETRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class UnsubscribeFromDatasetResponse;

class UnsubscribeFromDatasetResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit UnsubscribeFromDatasetResponsePrivate(UnsubscribeFromDatasetResponse * const q);

    void parseUnsubscribeFromDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnsubscribeFromDatasetResponse)
    Q_DISABLE_COPY(UnsubscribeFromDatasetResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
