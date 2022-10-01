// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYRESPONSE_P_H
#define QTAWS_DESCRIBEREPOSITORYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeRepositoryResponse;

class DescribeRepositoryResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DescribeRepositoryResponsePrivate(DescribeRepositoryResponse * const q);

    void parseDescribeRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoryResponse)
    Q_DISABLE_COPY(DescribeRepositoryResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
