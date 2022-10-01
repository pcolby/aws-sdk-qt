// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINASSOCIATIONRESPONSE_P_H
#define QTAWS_GETDOMAINASSOCIATIONRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GetDomainAssociationResponse;

class GetDomainAssociationResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GetDomainAssociationResponsePrivate(GetDomainAssociationResponse * const q);

    void parseGetDomainAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainAssociationResponse)
    Q_DISABLE_COPY(GetDomainAssociationResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
