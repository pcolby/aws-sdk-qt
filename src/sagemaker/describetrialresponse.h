// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALRESPONSE_H
#define QTAWS_DESCRIBETRIALRESPONSE_H

#include "sagemakerresponse.h"
#include "describetrialrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeTrialResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeTrialResponse(const DescribeTrialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrialResponse)
    Q_DISABLE_COPY(DescribeTrialResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
