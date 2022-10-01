// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORORGANIZATIONRESPONSE_P_H
#define QTAWS_LISTHANDSHAKESFORORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForOrganizationResponse;

class ListHandshakesForOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListHandshakesForOrganizationResponsePrivate(ListHandshakesForOrganizationResponse * const q);

    void parseListHandshakesForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHandshakesForOrganizationResponse)
    Q_DISABLE_COPY(ListHandshakesForOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
