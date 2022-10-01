// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTEVENTPATTERNRESPONSE_P_H
#define QTAWS_TESTEVENTPATTERNRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class TestEventPatternResponse;

class TestEventPatternResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit TestEventPatternResponsePrivate(TestEventPatternResponse * const q);

    void parseTestEventPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestEventPatternResponse)
    Q_DISABLE_COPY(TestEventPatternResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
