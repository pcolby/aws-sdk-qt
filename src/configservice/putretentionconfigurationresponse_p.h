// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTRETENTIONCONFIGURATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutRetentionConfigurationResponse;

class PutRetentionConfigurationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutRetentionConfigurationResponsePrivate(PutRetentionConfigurationResponse * const q);

    void parsePutRetentionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRetentionConfigurationResponse)
    Q_DISABLE_COPY(PutRetentionConfigurationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
