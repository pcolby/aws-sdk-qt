// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBESMBSETTINGSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBSettingsResponse;

class DescribeSMBSettingsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeSMBSettingsResponsePrivate(DescribeSMBSettingsResponse * const q);

    void parseDescribeSMBSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSMBSettingsResponse)
    Q_DISABLE_COPY(DescribeSMBSettingsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
