// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPILATIONJOBRESPONSE_H
#define QTAWS_CREATECOMPILATIONJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createcompilationjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateCompilationJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateCompilationJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateCompilationJobResponse(const CreateCompilationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCompilationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCompilationJobResponse)
    Q_DISABLE_COPY(CreateCompilationJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
