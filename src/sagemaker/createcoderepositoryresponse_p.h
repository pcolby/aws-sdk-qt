// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREPOSITORYRESPONSE_P_H
#define QTAWS_CREATECODEREPOSITORYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateCodeRepositoryResponse;

class CreateCodeRepositoryResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateCodeRepositoryResponsePrivate(CreateCodeRepositoryResponse * const q);

    void parseCreateCodeRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCodeRepositoryResponse)
    Q_DISABLE_COPY(CreateCodeRepositoryResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
