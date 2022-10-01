// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEDATAIMPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBETABLEDATAIMPORTJOBRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class DescribeTableDataImportJobResponse;

class DescribeTableDataImportJobResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit DescribeTableDataImportJobResponsePrivate(DescribeTableDataImportJobResponse * const q);

    void parseDescribeTableDataImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTableDataImportJobResponse)
    Q_DISABLE_COPY(DescribeTableDataImportJobResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
