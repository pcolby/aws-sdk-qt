// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONRESPONSE_P_H
#define QTAWS_UPDATEEXTENSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionResponse;

class UpdateExtensionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit UpdateExtensionResponsePrivate(UpdateExtensionResponse * const q);

    void parseUpdateExtensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExtensionResponse)
    Q_DISABLE_COPY(UpdateExtensionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
