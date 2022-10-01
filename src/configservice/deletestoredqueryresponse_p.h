// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTOREDQUERYRESPONSE_P_H
#define QTAWS_DELETESTOREDQUERYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteStoredQueryResponse;

class DeleteStoredQueryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteStoredQueryResponsePrivate(DeleteStoredQueryResponse * const q);

    void parseDeleteStoredQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStoredQueryResponse)
    Q_DISABLE_COPY(DeleteStoredQueryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
