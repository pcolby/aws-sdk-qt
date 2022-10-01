// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCOMPILATIONJOBRESPONSE_H
#define QTAWS_STOPCOMPILATIONJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stopcompilationjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopCompilationJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopCompilationJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopCompilationJobResponse(const StopCompilationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopCompilationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCompilationJobResponse)
    Q_DISABLE_COPY(StopCompilationJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
