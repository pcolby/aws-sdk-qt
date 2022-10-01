// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYRESPONSE_H
#define QTAWS_DESCRIBEREPOSITORYRESPONSE_H

#include "codeartifactresponse.h"
#include "describerepositoryrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeRepositoryResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DescribeRepositoryResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DescribeRepositoryResponse(const DescribeRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoryResponse)
    Q_DISABLE_COPY(DescribeRepositoryResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
