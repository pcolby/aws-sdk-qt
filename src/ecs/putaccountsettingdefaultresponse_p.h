// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSETTINGDEFAULTRESPONSE_P_H
#define QTAWS_PUTACCOUNTSETTINGDEFAULTRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class PutAccountSettingDefaultResponse;

class PutAccountSettingDefaultResponsePrivate : public EcsResponsePrivate {

public:

    explicit PutAccountSettingDefaultResponsePrivate(PutAccountSettingDefaultResponse * const q);

    void parsePutAccountSettingDefaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountSettingDefaultResponse)
    Q_DISABLE_COPY(PutAccountSettingDefaultResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
