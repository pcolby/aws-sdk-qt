// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationLoggingConfigurationResponse;

class GetSipMediaApplicationLoggingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetSipMediaApplicationLoggingConfigurationResponsePrivate(GetSipMediaApplicationLoggingConfigurationResponse * const q);

    void parseGetSipMediaApplicationLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSipMediaApplicationLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetSipMediaApplicationLoggingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
