// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_UPDATEAPPINSTANCEUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateAppInstanceUserResponse;

class UpdateAppInstanceUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateAppInstanceUserResponsePrivate(UpdateAppInstanceUserResponse * const q);

    void parseUpdateAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceUserResponse)
    Q_DISABLE_COPY(UpdateAppInstanceUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
