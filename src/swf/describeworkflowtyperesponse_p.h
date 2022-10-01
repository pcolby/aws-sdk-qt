// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWTYPERESPONSE_P_H
#define QTAWS_DESCRIBEWORKFLOWTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowTypeResponse;

class DescribeWorkflowTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit DescribeWorkflowTypeResponsePrivate(DescribeWorkflowTypeResponse * const q);

    void parseDescribeWorkflowTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkflowTypeResponse)
    Q_DISABLE_COPY(DescribeWorkflowTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
