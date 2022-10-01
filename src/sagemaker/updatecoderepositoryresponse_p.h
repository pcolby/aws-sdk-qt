// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODEREPOSITORYRESPONSE_P_H
#define QTAWS_UPDATECODEREPOSITORYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateCodeRepositoryResponse;

class UpdateCodeRepositoryResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateCodeRepositoryResponsePrivate(UpdateCodeRepositoryResponse * const q);

    void parseUpdateCodeRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCodeRepositoryResponse)
    Q_DISABLE_COPY(UpdateCodeRepositoryResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
