// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTCLASSIFICATIONJOBRESPONSE_H
#define QTAWS_STARTDOCUMENTCLASSIFICATIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "startdocumentclassificationjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartDocumentClassificationJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartDocumentClassificationJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartDocumentClassificationJobResponse(const StartDocumentClassificationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDocumentClassificationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDocumentClassificationJobResponse)
    Q_DISABLE_COPY(StartDocumentClassificationJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
