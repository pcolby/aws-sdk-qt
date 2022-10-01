// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREPOSITORYRESPONSE_H
#define QTAWS_DESCRIBECODEREPOSITORYRESPONSE_H

#include "sagemakerresponse.h"
#include "describecoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeCodeRepositoryResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeCodeRepositoryResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeCodeRepositoryResponse(const DescribeCodeRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCodeRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeRepositoryResponse)
    Q_DISABLE_COPY(DescribeCodeRepositoryResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
