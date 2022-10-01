// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTSETTINGRESPONSE_P_H
#define QTAWS_DELETEACCOUNTSETTINGRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DeleteAccountSettingResponse;

class DeleteAccountSettingResponsePrivate : public EcsResponsePrivate {

public:

    explicit DeleteAccountSettingResponsePrivate(DeleteAccountSettingResponse * const q);

    void parseDeleteAccountSettingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountSettingResponse)
    Q_DISABLE_COPY(DeleteAccountSettingResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
