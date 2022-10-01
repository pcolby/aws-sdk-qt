// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONSMBRESPONSE_P_H
#define QTAWS_UPDATELOCATIONSMBRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationSmbResponse;

class UpdateLocationSmbResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateLocationSmbResponsePrivate(UpdateLocationSmbResponse * const q);

    void parseUpdateLocationSmbResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLocationSmbResponse)
    Q_DISABLE_COPY(UpdateLocationSmbResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
