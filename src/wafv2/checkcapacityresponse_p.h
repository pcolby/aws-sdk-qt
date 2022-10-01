// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKCAPACITYRESPONSE_P_H
#define QTAWS_CHECKCAPACITYRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class CheckCapacityResponse;

class CheckCapacityResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit CheckCapacityResponsePrivate(CheckCapacityResponse * const q);

    void parseCheckCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckCapacityResponse)
    Q_DISABLE_COPY(CheckCapacityResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
