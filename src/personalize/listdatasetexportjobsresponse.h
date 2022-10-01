// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETEXPORTJOBSRESPONSE_H
#define QTAWS_LISTDATASETEXPORTJOBSRESPONSE_H

#include "personalizeresponse.h"
#include "listdatasetexportjobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetExportJobsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListDatasetExportJobsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListDatasetExportJobsResponse(const ListDatasetExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetExportJobsResponse)
    Q_DISABLE_COPY(ListDatasetExportJobsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
