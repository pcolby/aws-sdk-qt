// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCECONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTVPCECONFIGURATIONSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListVPCEConfigurationsResponse;

class ListVPCEConfigurationsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListVPCEConfigurationsResponsePrivate(ListVPCEConfigurationsResponse * const q);

    void parseListVPCEConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVPCEConfigurationsResponse)
    Q_DISABLE_COPY(ListVPCEConfigurationsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
