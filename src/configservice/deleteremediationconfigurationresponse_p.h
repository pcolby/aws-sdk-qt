// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEREMEDIATIONCONFIGURATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationConfigurationResponse;

class DeleteRemediationConfigurationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteRemediationConfigurationResponsePrivate(DeleteRemediationConfigurationResponse * const q);

    void parseDeleteRemediationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRemediationConfigurationResponse)
    Q_DISABLE_COPY(DeleteRemediationConfigurationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
