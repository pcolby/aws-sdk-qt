// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTOREDQUERYRESPONSE_P_H
#define QTAWS_GETSTOREDQUERYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetStoredQueryResponse;

class GetStoredQueryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetStoredQueryResponsePrivate(GetStoredQueryResponse * const q);

    void parseGetStoredQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStoredQueryResponse)
    Q_DISABLE_COPY(GetStoredQueryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
