// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONRESPONSE_H
#define QTAWS_DESCRIBEACTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describeactionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeActionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeActionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeActionResponse(const DescribeActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActionResponse)
    Q_DISABLE_COPY(DescribeActionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
