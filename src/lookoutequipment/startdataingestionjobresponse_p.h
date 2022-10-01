// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATAINGESTIONJOBRESPONSE_P_H
#define QTAWS_STARTDATAINGESTIONJOBRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class StartDataIngestionJobResponse;

class StartDataIngestionJobResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit StartDataIngestionJobResponsePrivate(StartDataIngestionJobResponse * const q);

    void parseStartDataIngestionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDataIngestionJobResponse)
    Q_DISABLE_COPY(StartDataIngestionJobResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
