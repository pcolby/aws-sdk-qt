// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGRESPONSE_H
#define QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "describestudiolifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeStudioLifecycleConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeStudioLifecycleConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeStudioLifecycleConfigResponse(const DescribeStudioLifecycleConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStudioLifecycleConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStudioLifecycleConfigResponse)
    Q_DISABLE_COPY(DescribeStudioLifecycleConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
