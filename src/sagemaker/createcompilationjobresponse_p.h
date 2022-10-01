// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPILATIONJOBRESPONSE_P_H
#define QTAWS_CREATECOMPILATIONJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateCompilationJobResponse;

class CreateCompilationJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateCompilationJobResponsePrivate(CreateCompilationJobResponse * const q);

    void parseCreateCompilationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCompilationJobResponse)
    Q_DISABLE_COPY(CreateCompilationJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
