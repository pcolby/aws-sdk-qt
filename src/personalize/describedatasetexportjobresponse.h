// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETEXPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEDATASETEXPORTJOBRESPONSE_H

#include "personalizeresponse.h"
#include "describedatasetexportjobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetExportJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetExportJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeDatasetExportJobResponse(const DescribeDatasetExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatasetExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetExportJobResponse)
    Q_DISABLE_COPY(DescribeDatasetExportJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
