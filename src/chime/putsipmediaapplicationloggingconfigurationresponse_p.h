// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutSipMediaApplicationLoggingConfigurationResponse;

class PutSipMediaApplicationLoggingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutSipMediaApplicationLoggingConfigurationResponsePrivate(PutSipMediaApplicationLoggingConfigurationResponse * const q);

    void parsePutSipMediaApplicationLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSipMediaApplicationLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutSipMediaApplicationLoggingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
