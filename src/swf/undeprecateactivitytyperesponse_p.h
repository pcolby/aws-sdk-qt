// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEACTIVITYTYPERESPONSE_P_H
#define QTAWS_UNDEPRECATEACTIVITYTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class UndeprecateActivityTypeResponse;

class UndeprecateActivityTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit UndeprecateActivityTypeResponsePrivate(UndeprecateActivityTypeResponse * const q);

    void parseUndeprecateActivityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UndeprecateActivityTypeResponse)
    Q_DISABLE_COPY(UndeprecateActivityTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
