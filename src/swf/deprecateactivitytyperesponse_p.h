// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEACTIVITYTYPERESPONSE_P_H
#define QTAWS_DEPRECATEACTIVITYTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class DeprecateActivityTypeResponse;

class DeprecateActivityTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit DeprecateActivityTypeResponsePrivate(DeprecateActivityTypeResponse * const q);

    void parseDeprecateActivityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprecateActivityTypeResponse)
    Q_DISABLE_COPY(DeprecateActivityTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
