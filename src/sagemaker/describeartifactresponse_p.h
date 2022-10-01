// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARTIFACTRESPONSE_P_H
#define QTAWS_DESCRIBEARTIFACTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeArtifactResponse;

class DescribeArtifactResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeArtifactResponsePrivate(DescribeArtifactResponse * const q);

    void parseDescribeArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeArtifactResponse)
    Q_DISABLE_COPY(DescribeArtifactResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
