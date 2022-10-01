// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEWORKFLOWTYPERESPONSE_P_H
#define QTAWS_DEPRECATEWORKFLOWTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class DeprecateWorkflowTypeResponse;

class DeprecateWorkflowTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit DeprecateWorkflowTypeResponsePrivate(DeprecateWorkflowTypeResponse * const q);

    void parseDeprecateWorkflowTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprecateWorkflowTypeResponse)
    Q_DISABLE_COPY(DeprecateWorkflowTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
