// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERRESPONSE_P_H
#define QTAWS_UPDATERESOLVERRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateResolverResponse;

class UpdateResolverResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateResolverResponsePrivate(UpdateResolverResponse * const q);

    void parseUpdateResolverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResolverResponse)
    Q_DISABLE_COPY(UpdateResolverResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
