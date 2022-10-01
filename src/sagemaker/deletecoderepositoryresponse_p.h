// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODEREPOSITORYRESPONSE_P_H
#define QTAWS_DELETECODEREPOSITORYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteCodeRepositoryResponse;

class DeleteCodeRepositoryResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteCodeRepositoryResponsePrivate(DeleteCodeRepositoryResponse * const q);

    void parseDeleteCodeRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCodeRepositoryResponse)
    Q_DISABLE_COPY(DeleteCodeRepositoryResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
