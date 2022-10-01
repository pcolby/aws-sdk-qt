// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETRESPONSE_P_H
#define QTAWS_DELETEDATASETRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class DeleteDatasetResponse;

class DeleteDatasetResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit DeleteDatasetResponsePrivate(DeleteDatasetResponse * const q);

    void parseDeleteDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetResponse)
    Q_DISABLE_COPY(DeleteDatasetResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
