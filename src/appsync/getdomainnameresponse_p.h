// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMERESPONSE_P_H
#define QTAWS_GETDOMAINNAMERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetDomainNameResponse;

class GetDomainNameResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetDomainNameResponsePrivate(GetDomainNameResponse * const q);

    void parseGetDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainNameResponse)
    Q_DISABLE_COPY(GetDomainNameResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
