// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARTIFACTRESPONSE_H
#define QTAWS_DESCRIBEARTIFACTRESPONSE_H

#include "sagemakerresponse.h"
#include "describeartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeArtifactResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeArtifactResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeArtifactResponse(const DescribeArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeArtifactResponse)
    Q_DISABLE_COPY(DescribeArtifactResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
