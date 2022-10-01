// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBULKIMPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEBULKIMPORTJOBRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describebulkimportjobrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeBulkImportJobResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeBulkImportJobResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeBulkImportJobResponse(const DescribeBulkImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBulkImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBulkImportJobResponse)
    Q_DISABLE_COPY(DescribeBulkImportJobResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
