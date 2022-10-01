// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTOREDQUERIESRESPONSE_P_H
#define QTAWS_LISTSTOREDQUERIESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class ListStoredQueriesResponse;

class ListStoredQueriesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit ListStoredQueriesResponsePrivate(ListStoredQueriesResponse * const q);

    void parseListStoredQueriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStoredQueriesResponse)
    Q_DISABLE_COPY(ListStoredQueriesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
