// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_PUTREMEDIATIONCONFIGURATIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationConfigurationsResponse;

class PutRemediationConfigurationsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutRemediationConfigurationsResponsePrivate(PutRemediationConfigurationsResponse * const q);

    void parsePutRemediationConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRemediationConfigurationsResponse)
    Q_DISABLE_COPY(PutRemediationConfigurationsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
