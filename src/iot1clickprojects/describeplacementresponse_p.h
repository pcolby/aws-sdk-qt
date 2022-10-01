// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTRESPONSE_P_H
#define QTAWS_DESCRIBEPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DescribePlacementResponse;

class DescribePlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit DescribePlacementResponsePrivate(DescribePlacementResponse * const q);

    void parseDescribePlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePlacementResponse)
    Q_DISABLE_COPY(DescribePlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
