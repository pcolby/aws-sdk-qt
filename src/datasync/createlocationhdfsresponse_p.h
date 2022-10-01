// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONHDFSRESPONSE_P_H
#define QTAWS_CREATELOCATIONHDFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationHdfsResponse;

class CreateLocationHdfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationHdfsResponsePrivate(CreateLocationHdfsResponse * const q);

    void parseCreateLocationHdfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationHdfsResponse)
    Q_DISABLE_COPY(CreateLocationHdfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
