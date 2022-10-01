// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSRESPONSE_P_H
#define QTAWS_LISTAPPSRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class ListAppsResponse;

class ListAppsResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit ListAppsResponsePrivate(ListAppsResponse * const q);

    void parseListAppsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppsResponse)
    Q_DISABLE_COPY(ListAppsResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
