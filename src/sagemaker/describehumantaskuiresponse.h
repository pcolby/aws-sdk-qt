// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANTASKUIRESPONSE_H
#define QTAWS_DESCRIBEHUMANTASKUIRESPONSE_H

#include "sagemakerresponse.h"
#include "describehumantaskuirequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeHumanTaskUiResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeHumanTaskUiResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeHumanTaskUiResponse(const DescribeHumanTaskUiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHumanTaskUiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHumanTaskUiResponse)
    Q_DISABLE_COPY(DescribeHumanTaskUiResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
