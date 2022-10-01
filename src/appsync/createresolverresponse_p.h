// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERRESPONSE_P_H
#define QTAWS_CREATERESOLVERRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class CreateResolverResponse;

class CreateResolverResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit CreateResolverResponsePrivate(CreateResolverResponse * const q);

    void parseCreateResolverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResolverResponse)
    Q_DISABLE_COPY(CreateResolverResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
