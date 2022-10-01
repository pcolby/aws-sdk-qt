// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONRECORDERRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONRECORDERRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationRecorderResponse;

class PutConfigurationRecorderResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutConfigurationRecorderResponsePrivate(PutConfigurationRecorderResponse * const q);

    void parsePutConfigurationRecorderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationRecorderResponse)
    Q_DISABLE_COPY(PutConfigurationRecorderResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
