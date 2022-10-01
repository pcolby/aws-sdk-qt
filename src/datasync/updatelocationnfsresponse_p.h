// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONNFSRESPONSE_P_H
#define QTAWS_UPDATELOCATIONNFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationNfsResponse;

class UpdateLocationNfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateLocationNfsResponsePrivate(UpdateLocationNfsResponse * const q);

    void parseUpdateLocationNfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLocationNfsResponse)
    Q_DISABLE_COPY(UpdateLocationNfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
