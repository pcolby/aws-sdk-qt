// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUEUESRESPONSE_P_H
#define QTAWS_SEARCHQUEUESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class SearchQueuesResponse;

class SearchQueuesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit SearchQueuesResponsePrivate(SearchQueuesResponse * const q);

    void parseSearchQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchQueuesResponse)
    Q_DISABLE_COPY(SearchQueuesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
