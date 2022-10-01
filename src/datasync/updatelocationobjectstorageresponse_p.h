// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONOBJECTSTORAGERESPONSE_P_H
#define QTAWS_UPDATELOCATIONOBJECTSTORAGERESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationObjectStorageResponse;

class UpdateLocationObjectStorageResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateLocationObjectStorageResponsePrivate(UpdateLocationObjectStorageResponse * const q);

    void parseUpdateLocationObjectStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLocationObjectStorageResponse)
    Q_DISABLE_COPY(UpdateLocationObjectStorageResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
