// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINGESTIONJOBSRESPONSE_P_H
#define QTAWS_LISTDATAINGESTIONJOBSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListDataIngestionJobsResponse;

class ListDataIngestionJobsResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListDataIngestionJobsResponsePrivate(ListDataIngestionJobsResponse * const q);

    void parseListDataIngestionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataIngestionJobsResponse)
    Q_DISABLE_COPY(ListDataIngestionJobsResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
