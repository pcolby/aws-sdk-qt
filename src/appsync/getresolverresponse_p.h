// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRESPONSE_P_H
#define QTAWS_GETRESOLVERRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetResolverResponse;

class GetResolverResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetResolverResponsePrivate(GetResolverResponse * const q);

    void parseGetResolverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverResponse)
    Q_DISABLE_COPY(GetResolverResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
