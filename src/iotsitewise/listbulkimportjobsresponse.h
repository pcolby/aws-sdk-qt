// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKIMPORTJOBSRESPONSE_H
#define QTAWS_LISTBULKIMPORTJOBSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listbulkimportjobsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListBulkImportJobsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListBulkImportJobsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListBulkImportJobsResponse(const ListBulkImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBulkImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBulkImportJobsResponse)
    Q_DISABLE_COPY(ListBulkImportJobsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
