// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBRESPONSE_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describedocumentclassificationjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassificationJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeDocumentClassificationJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeDocumentClassificationJobResponse(const DescribeDocumentClassificationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDocumentClassificationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentClassificationJobResponse)
    Q_DISABLE_COPY(DescribeDocumentClassificationJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
