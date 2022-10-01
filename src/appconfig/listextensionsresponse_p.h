// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSRESPONSE_P_H
#define QTAWS_LISTEXTENSIONSRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionsResponse;

class ListExtensionsResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit ListExtensionsResponsePrivate(ListExtensionsResponse * const q);

    void parseListExtensionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExtensionsResponse)
    Q_DISABLE_COPY(ListExtensionsResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
