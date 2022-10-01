// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_LISTLOGSUBSCRIPTIONSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class ListLogSubscriptionsResponse;

class ListLogSubscriptionsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit ListLogSubscriptionsResponsePrivate(ListLogSubscriptionsResponse * const q);

    void parseListLogSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLogSubscriptionsResponse)
    Q_DISABLE_COPY(ListLogSubscriptionsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
