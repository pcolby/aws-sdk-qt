// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINRESPONSE_P_H
#define QTAWS_GETDOMAINRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetDomainResponse;

class GetDomainResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetDomainResponsePrivate(GetDomainResponse * const q);

    void parseGetDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainResponse)
    Q_DISABLE_COPY(GetDomainResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
