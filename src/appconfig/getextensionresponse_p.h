// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONRESPONSE_P_H
#define QTAWS_GETEXTENSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionResponse;

class GetExtensionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetExtensionResponsePrivate(GetExtensionResponse * const q);

    void parseGetExtensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExtensionResponse)
    Q_DISABLE_COPY(GetExtensionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
