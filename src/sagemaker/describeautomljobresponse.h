// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMLJOBRESPONSE_H
#define QTAWS_DESCRIBEAUTOMLJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describeautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAutoMLJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAutoMLJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeAutoMLJobResponse(const DescribeAutoMLJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoMLJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoMLJobResponse)
    Q_DISABLE_COPY(DescribeAutoMLJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
