// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGRESPONSE_P_H
#define QTAWS_APPCONFIGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AppConfig {

class AppConfigResponse;

class AppConfigResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppConfigResponsePrivate(AppConfigResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppConfigResponse)
    Q_DISABLE_COPY(AppConfigResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
