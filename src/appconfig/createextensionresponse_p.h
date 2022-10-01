// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONRESPONSE_P_H
#define QTAWS_CREATEEXTENSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionResponse;

class CreateExtensionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit CreateExtensionResponsePrivate(CreateExtensionResponse * const q);

    void parseCreateExtensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExtensionResponse)
    Q_DISABLE_COPY(CreateExtensionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
