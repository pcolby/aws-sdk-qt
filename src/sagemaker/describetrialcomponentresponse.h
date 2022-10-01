// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALCOMPONENTRESPONSE_H
#define QTAWS_DESCRIBETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "describetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeTrialComponentResponse(const DescribeTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrialComponentResponse)
    Q_DISABLE_COPY(DescribeTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
