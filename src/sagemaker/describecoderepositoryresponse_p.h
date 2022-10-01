// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREPOSITORYRESPONSE_P_H
#define QTAWS_DESCRIBECODEREPOSITORYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeCodeRepositoryResponse;

class DescribeCodeRepositoryResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeCodeRepositoryResponsePrivate(DescribeCodeRepositoryResponse * const q);

    void parseDescribeCodeRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCodeRepositoryResponse)
    Q_DISABLE_COPY(DescribeCodeRepositoryResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
