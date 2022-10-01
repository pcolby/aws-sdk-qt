// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFORCERESPONSE_H
#define QTAWS_DESCRIBEWORKFORCERESPONSE_H

#include "sagemakerresponse.h"
#include "describeworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkforceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeWorkforceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeWorkforceResponse(const DescribeWorkforceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkforceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkforceResponse)
    Q_DISABLE_COPY(DescribeWorkforceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
