// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEIMPORTTASKSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeImportTasksResponse;

class DescribeImportTasksResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit DescribeImportTasksResponsePrivate(DescribeImportTasksResponse * const q);

    void parseDescribeImportTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImportTasksResponse)
    Q_DISABLE_COPY(DescribeImportTasksResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
