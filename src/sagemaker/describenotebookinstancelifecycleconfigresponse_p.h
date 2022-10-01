// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_P_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceLifecycleConfigResponse;

class DescribeNotebookInstanceLifecycleConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeNotebookInstanceLifecycleConfigResponsePrivate(DescribeNotebookInstanceLifecycleConfigResponse * const q);

    void parseDescribeNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(DescribeNotebookInstanceLifecycleConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
