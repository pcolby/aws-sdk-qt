// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENWORKFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTOPENWORKFLOWEXECUTIONSRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class ListOpenWorkflowExecutionsResponse;

class ListOpenWorkflowExecutionsResponsePrivate : public SwfResponsePrivate {

public:

    explicit ListOpenWorkflowExecutionsResponsePrivate(ListOpenWorkflowExecutionsResponse * const q);

    void parseListOpenWorkflowExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOpenWorkflowExecutionsResponse)
    Q_DISABLE_COPY(ListOpenWorkflowExecutionsResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
