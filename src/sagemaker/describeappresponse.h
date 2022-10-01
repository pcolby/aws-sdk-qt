// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPRESPONSE_H
#define QTAWS_DESCRIBEAPPRESPONSE_H

#include "sagemakerresponse.h"
#include "describeapprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAppResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeAppResponse(const DescribeAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppResponse)
    Q_DISABLE_COPY(DescribeAppResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
