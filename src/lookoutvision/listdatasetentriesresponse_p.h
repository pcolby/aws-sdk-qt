// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETENTRIESRESPONSE_P_H
#define QTAWS_LISTDATASETENTRIESRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class ListDatasetEntriesResponse;

class ListDatasetEntriesResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit ListDatasetEntriesResponsePrivate(ListDatasetEntriesResponse * const q);

    void parseListDatasetEntriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetEntriesResponse)
    Q_DISABLE_COPY(ListDatasetEntriesResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
