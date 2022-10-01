// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTOREDQUERYRESPONSE_P_H
#define QTAWS_PUTSTOREDQUERYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutStoredQueryResponse;

class PutStoredQueryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutStoredQueryResponsePrivate(PutStoredQueryResponse * const q);

    void parsePutStoredQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutStoredQueryResponse)
    Q_DISABLE_COPY(PutStoredQueryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
