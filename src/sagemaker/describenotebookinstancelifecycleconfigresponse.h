// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "describenotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceLifecycleConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeNotebookInstanceLifecycleConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeNotebookInstanceLifecycleConfigResponse(const DescribeNotebookInstanceLifecycleConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotebookInstanceLifecycleConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(DescribeNotebookInstanceLifecycleConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
