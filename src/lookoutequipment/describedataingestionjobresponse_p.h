// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAINGESTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDATAINGESTIONJOBRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeDataIngestionJobResponse;

class DescribeDataIngestionJobResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DescribeDataIngestionJobResponsePrivate(DescribeDataIngestionJobResponse * const q);

    void parseDescribeDataIngestionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataIngestionJobResponse)
    Q_DISABLE_COPY(DescribeDataIngestionJobResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
