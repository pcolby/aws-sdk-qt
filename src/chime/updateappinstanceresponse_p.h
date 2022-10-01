// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCERESPONSE_P_H
#define QTAWS_UPDATEAPPINSTANCERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateAppInstanceResponse;

class UpdateAppInstanceResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateAppInstanceResponsePrivate(UpdateAppInstanceResponse * const q);

    void parseUpdateAppInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceResponse)
    Q_DISABLE_COPY(UpdateAppInstanceResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
