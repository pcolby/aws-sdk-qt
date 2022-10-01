// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWRESPONSE_P_H
#define QTAWS_DESCRIBEWORKFLOWRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeWorkflowResponse;

class DescribeWorkflowResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeWorkflowResponsePrivate(DescribeWorkflowResponse * const q);

    void parseDescribeWorkflowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkflowResponse)
    Q_DISABLE_COPY(DescribeWorkflowResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
