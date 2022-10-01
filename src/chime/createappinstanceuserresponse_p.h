// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_CREATEAPPINSTANCEUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceUserResponse;

class CreateAppInstanceUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateAppInstanceUserResponsePrivate(CreateAppInstanceUserResponse * const q);

    void parseCreateAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceUserResponse)
    Q_DISABLE_COPY(CreateAppInstanceUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
