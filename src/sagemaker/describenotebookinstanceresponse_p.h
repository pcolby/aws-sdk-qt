// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCERESPONSE_P_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceResponse;

class DescribeNotebookInstanceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeNotebookInstanceResponsePrivate(DescribeNotebookInstanceResponse * const q);

    void parseDescribeNotebookInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotebookInstanceResponse)
    Q_DISABLE_COPY(DescribeNotebookInstanceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
