// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETIMPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEDATASETIMPORTJOBRESPONSE_H

#include "personalizeresponse.h"
#include "describedatasetimportjobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetImportJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetImportJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeDatasetImportJobResponse(const DescribeDatasetImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatasetImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetImportJobResponse)
    Q_DISABLE_COPY(DescribeDatasetImportJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
