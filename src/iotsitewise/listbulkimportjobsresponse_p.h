// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKIMPORTJOBSRESPONSE_P_H
#define QTAWS_LISTBULKIMPORTJOBSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListBulkImportJobsResponse;

class ListBulkImportJobsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListBulkImportJobsResponsePrivate(ListBulkImportJobsResponse * const q);

    void parseListBulkImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBulkImportJobsResponse)
    Q_DISABLE_COPY(ListBulkImportJobsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
