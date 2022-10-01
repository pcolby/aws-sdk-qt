// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERRESPONSE_P_H
#define QTAWS_DELETERESOLVERRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DeleteResolverResponse;

class DeleteResolverResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DeleteResolverResponsePrivate(DeleteResolverResponse * const q);

    void parseDeleteResolverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResolverResponse)
    Q_DISABLE_COPY(DeleteResolverResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
