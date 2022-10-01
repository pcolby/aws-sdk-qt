// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGDOCUMENTCLASSIFIERRESPONSE_H
#define QTAWS_STOPTRAININGDOCUMENTCLASSIFIERRESPONSE_H

#include "comprehendresponse.h"
#include "stoptrainingdocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingDocumentClassifierResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopTrainingDocumentClassifierResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopTrainingDocumentClassifierResponse(const StopTrainingDocumentClassifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTrainingDocumentClassifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTrainingDocumentClassifierResponse)
    Q_DISABLE_COPY(StopTrainingDocumentClassifierResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
