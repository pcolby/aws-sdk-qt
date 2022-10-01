// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTDOMAINASSOCIATIONSRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class ListDomainAssociationsResponse;

class ListDomainAssociationsResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit ListDomainAssociationsResponsePrivate(ListDomainAssociationsResponse * const q);

    void parseListDomainAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainAssociationsResponse)
    Q_DISABLE_COPY(ListDomainAssociationsResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
