// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINRESPONSE_P_H
#define QTAWS_CREATEDOMAINRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateDomainResponse;

class CreateDomainResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit CreateDomainResponsePrivate(CreateDomainResponse * const q);

    void parseCreateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainResponse)
    Q_DISABLE_COPY(CreateDomainResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
