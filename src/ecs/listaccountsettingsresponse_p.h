// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSETTINGSRESPONSE_P_H
#define QTAWS_LISTACCOUNTSETTINGSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListAccountSettingsResponse;

class ListAccountSettingsResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListAccountSettingsResponsePrivate(ListAccountSettingsResponse * const q);

    void parseListAccountSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountSettingsResponse)
    Q_DISABLE_COPY(ListAccountSettingsResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
