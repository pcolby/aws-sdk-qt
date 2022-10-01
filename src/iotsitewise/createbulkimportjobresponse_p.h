// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBULKIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEBULKIMPORTJOBRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateBulkImportJobResponse;

class CreateBulkImportJobResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateBulkImportJobResponsePrivate(CreateBulkImportJobResponse * const q);

    void parseCreateBulkImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBulkImportJobResponse)
    Q_DISABLE_COPY(CreateBulkImportJobResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
