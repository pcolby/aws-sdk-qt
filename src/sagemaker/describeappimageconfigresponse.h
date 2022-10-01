// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPIMAGECONFIGRESPONSE_H
#define QTAWS_DESCRIBEAPPIMAGECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "describeappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppImageConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAppImageConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeAppImageConfigResponse(const DescribeAppImageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppImageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppImageConfigResponse)
    Q_DISABLE_COPY(DescribeAppImageConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
