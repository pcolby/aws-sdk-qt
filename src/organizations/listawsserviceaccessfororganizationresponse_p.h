// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONRESPONSE_P_H
#define QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListAWSServiceAccessForOrganizationResponse;

class ListAWSServiceAccessForOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListAWSServiceAccessForOrganizationResponsePrivate(ListAWSServiceAccessForOrganizationResponse * const q);

    void parseListAWSServiceAccessForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAWSServiceAccessForOrganizationResponse)
    Q_DISABLE_COPY(ListAWSServiceAccessForOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
