// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETEXPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDATASETEXPORTJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetExportJobResponse;

class DescribeDatasetExportJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeDatasetExportJobResponsePrivate(DescribeDatasetExportJobResponse * const q);

    void parseDescribeDatasetExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetExportJobResponse)
    Q_DISABLE_COPY(DescribeDatasetExportJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
