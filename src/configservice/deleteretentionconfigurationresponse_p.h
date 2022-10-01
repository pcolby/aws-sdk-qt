// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETERETENTIONCONFIGURATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteRetentionConfigurationResponse;

class DeleteRetentionConfigurationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteRetentionConfigurationResponsePrivate(DeleteRetentionConfigurationResponse * const q);

    void parseDeleteRetentionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRetentionConfigurationResponse)
    Q_DISABLE_COPY(DeleteRetentionConfigurationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
