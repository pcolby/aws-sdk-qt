// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKEXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBENOTEBOOKEXECUTIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeNotebookExecutionResponse;

class DescribeNotebookExecutionResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeNotebookExecutionResponsePrivate(DescribeNotebookExecutionResponse * const q);

    void parseDescribeNotebookExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotebookExecutionResponse)
    Q_DISABLE_COPY(DescribeNotebookExecutionResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
