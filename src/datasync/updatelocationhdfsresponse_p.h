// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONHDFSRESPONSE_P_H
#define QTAWS_UPDATELOCATIONHDFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationHdfsResponse;

class UpdateLocationHdfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateLocationHdfsResponsePrivate(UpdateLocationHdfsResponse * const q);

    void parseUpdateLocationHdfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLocationHdfsResponse)
    Q_DISABLE_COPY(UpdateLocationHdfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
