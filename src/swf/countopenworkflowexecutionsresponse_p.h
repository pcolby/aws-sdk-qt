// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTOPENWORKFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_COUNTOPENWORKFLOWEXECUTIONSRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class CountOpenWorkflowExecutionsResponse;

class CountOpenWorkflowExecutionsResponsePrivate : public SwfResponsePrivate {

public:

    explicit CountOpenWorkflowExecutionsResponsePrivate(CountOpenWorkflowExecutionsResponse * const q);

    void parseCountOpenWorkflowExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CountOpenWorkflowExecutionsResponse)
    Q_DISABLE_COPY(CountOpenWorkflowExecutionsResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
