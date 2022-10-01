// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEDOMAINASSOCIATIONRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class UpdateDomainAssociationResponse;

class UpdateDomainAssociationResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit UpdateDomainAssociationResponsePrivate(UpdateDomainAssociationResponse * const q);

    void parseUpdateDomainAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainAssociationResponse)
    Q_DISABLE_COPY(UpdateDomainAssociationResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
