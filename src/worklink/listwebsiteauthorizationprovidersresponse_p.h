// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSRESPONSE_P_H
#define QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteAuthorizationProvidersResponse;

class ListWebsiteAuthorizationProvidersResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit ListWebsiteAuthorizationProvidersResponsePrivate(ListWebsiteAuthorizationProvidersResponse * const q);

    void parseListWebsiteAuthorizationProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWebsiteAuthorizationProvidersResponse)
    Q_DISABLE_COPY(ListWebsiteAuthorizationProvidersResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
