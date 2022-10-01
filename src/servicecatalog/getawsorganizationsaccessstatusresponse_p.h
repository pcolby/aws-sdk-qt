// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSORGANIZATIONSACCESSSTATUSRESPONSE_P_H
#define QTAWS_GETAWSORGANIZATIONSACCESSSTATUSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class GetAWSOrganizationsAccessStatusResponse;

class GetAWSOrganizationsAccessStatusResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit GetAWSOrganizationsAccessStatusResponsePrivate(GetAWSOrganizationsAccessStatusResponse * const q);

    void parseGetAWSOrganizationsAccessStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAWSOrganizationsAccessStatusResponse)
    Q_DISABLE_COPY(GetAWSOrganizationsAccessStatusResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
