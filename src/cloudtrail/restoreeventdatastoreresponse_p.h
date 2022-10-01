// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREEVENTDATASTORERESPONSE_P_H
#define QTAWS_RESTOREEVENTDATASTORERESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class RestoreEventDataStoreResponse;

class RestoreEventDataStoreResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit RestoreEventDataStoreResponsePrivate(RestoreEventDataStoreResponse * const q);

    void parseRestoreEventDataStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreEventDataStoreResponse)
    Q_DISABLE_COPY(RestoreEventDataStoreResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
