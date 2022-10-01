// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKFLOWTYPERESPONSE_P_H
#define QTAWS_REGISTERWORKFLOWTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RegisterWorkflowTypeResponse;

class RegisterWorkflowTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit RegisterWorkflowTypeResponsePrivate(RegisterWorkflowTypeResponse * const q);

    void parseRegisterWorkflowTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterWorkflowTypeResponse)
    Q_DISABLE_COPY(RegisterWorkflowTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
