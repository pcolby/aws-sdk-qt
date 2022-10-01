// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCATIONSRESPONSE_P_H
#define QTAWS_LISTLOCATIONSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class ListLocationsResponse;

class ListLocationsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit ListLocationsResponsePrivate(ListLocationsResponse * const q);

    void parseListLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLocationsResponse)
    Q_DISABLE_COPY(ListLocationsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
