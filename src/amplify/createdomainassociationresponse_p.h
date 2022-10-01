// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEDOMAINASSOCIATIONRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class CreateDomainAssociationResponse;

class CreateDomainAssociationResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit CreateDomainAssociationResponsePrivate(CreateDomainAssociationResponse * const q);

    void parseCreateDomainAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainAssociationResponse)
    Q_DISABLE_COPY(CreateDomainAssociationResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
