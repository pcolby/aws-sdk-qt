// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBULKIMPORTJOBRESPONSE_H
#define QTAWS_CREATEBULKIMPORTJOBRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createbulkimportjobrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateBulkImportJobResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreateBulkImportJobResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreateBulkImportJobResponse(const CreateBulkImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBulkImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBulkImportJobResponse)
    Q_DISABLE_COPY(CreateBulkImportJobResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
