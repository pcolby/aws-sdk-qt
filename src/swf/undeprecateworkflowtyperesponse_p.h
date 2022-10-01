// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEWORKFLOWTYPERESPONSE_P_H
#define QTAWS_UNDEPRECATEWORKFLOWTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class UndeprecateWorkflowTypeResponse;

class UndeprecateWorkflowTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit UndeprecateWorkflowTypeResponsePrivate(UndeprecateWorkflowTypeResponse * const q);

    void parseUndeprecateWorkflowTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UndeprecateWorkflowTypeResponse)
    Q_DISABLE_COPY(UndeprecateWorkflowTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
