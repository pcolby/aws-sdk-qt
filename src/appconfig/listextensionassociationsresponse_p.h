// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTEXTENSIONASSOCIATIONSRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionAssociationsResponse;

class ListExtensionAssociationsResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit ListExtensionAssociationsResponsePrivate(ListExtensionAssociationsResponse * const q);

    void parseListExtensionAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExtensionAssociationsResponse)
    Q_DISABLE_COPY(ListExtensionAssociationsResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
