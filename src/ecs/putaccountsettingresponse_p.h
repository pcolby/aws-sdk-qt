// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSETTINGRESPONSE_P_H
#define QTAWS_PUTACCOUNTSETTINGRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class PutAccountSettingResponse;

class PutAccountSettingResponsePrivate : public EcsResponsePrivate {

public:

    explicit PutAccountSettingResponsePrivate(PutAccountSettingResponse * const q);

    void parsePutAccountSettingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountSettingResponse)
    Q_DISABLE_COPY(PutAccountSettingResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
