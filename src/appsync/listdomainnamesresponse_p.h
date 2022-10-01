// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESRESPONSE_P_H
#define QTAWS_LISTDOMAINNAMESRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListDomainNamesResponse;

class ListDomainNamesResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListDomainNamesResponsePrivate(ListDomainNamesResponse * const q);

    void parseListDomainNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainNamesResponse)
    Q_DISABLE_COPY(ListDomainNamesResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
