// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONRECORDERRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONRECORDERRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationRecorderResponse;

class DeleteConfigurationRecorderResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteConfigurationRecorderResponsePrivate(DeleteConfigurationRecorderResponse * const q);

    void parseDeleteConfigurationRecorderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationRecorderResponse)
    Q_DISABLE_COPY(DeleteConfigurationRecorderResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
