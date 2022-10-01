// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBULKIMPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEBULKIMPORTJOBRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeBulkImportJobResponse;

class DescribeBulkImportJobResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeBulkImportJobResponsePrivate(DescribeBulkImportJobResponse * const q);

    void parseDescribeBulkImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBulkImportJobResponse)
    Q_DISABLE_COPY(DescribeBulkImportJobResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
