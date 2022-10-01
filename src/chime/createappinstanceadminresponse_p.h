// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEADMINRESPONSE_P_H
#define QTAWS_CREATEAPPINSTANCEADMINRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceAdminResponse;

class CreateAppInstanceAdminResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateAppInstanceAdminResponsePrivate(CreateAppInstanceAdminResponse * const q);

    void parseCreateAppInstanceAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceAdminResponse)
    Q_DISABLE_COPY(CreateAppInstanceAdminResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
