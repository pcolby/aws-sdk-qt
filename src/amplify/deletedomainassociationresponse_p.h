// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEDOMAINASSOCIATIONRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class DeleteDomainAssociationResponse;

class DeleteDomainAssociationResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit DeleteDomainAssociationResponsePrivate(DeleteDomainAssociationResponse * const q);

    void parseDeleteDomainAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDomainAssociationResponse)
    Q_DISABLE_COPY(DeleteDomainAssociationResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
