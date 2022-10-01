// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTROSPECTIONSCHEMARESPONSE_P_H
#define QTAWS_GETINTROSPECTIONSCHEMARESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetIntrospectionSchemaResponse;

class GetIntrospectionSchemaResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetIntrospectionSchemaResponsePrivate(GetIntrospectionSchemaResponse * const q);

    void parseGetIntrospectionSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntrospectionSchemaResponse)
    Q_DISABLE_COPY(GetIntrospectionSchemaResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
