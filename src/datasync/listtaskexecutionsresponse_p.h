// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTTASKEXECUTIONSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class ListTaskExecutionsResponse;

class ListTaskExecutionsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit ListTaskExecutionsResponsePrivate(ListTaskExecutionsResponse * const q);

    void parseListTaskExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTaskExecutionsResponse)
    Q_DISABLE_COPY(ListTaskExecutionsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
