// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKESCREENAUTOMATIONRESPONSE_P_H
#define QTAWS_INVOKESCREENAUTOMATIONRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class InvokeScreenAutomationResponse;

class InvokeScreenAutomationResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit InvokeScreenAutomationResponsePrivate(InvokeScreenAutomationResponse * const q);

    void parseInvokeScreenAutomationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvokeScreenAutomationResponse)
    Q_DISABLE_COPY(InvokeScreenAutomationResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
