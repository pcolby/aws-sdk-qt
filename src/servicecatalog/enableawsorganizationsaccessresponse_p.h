// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSORGANIZATIONSACCESSRESPONSE_P_H
#define QTAWS_ENABLEAWSORGANIZATIONSACCESSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class EnableAWSOrganizationsAccessResponse;

class EnableAWSOrganizationsAccessResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit EnableAWSOrganizationsAccessResponsePrivate(EnableAWSOrganizationsAccessResponse * const q);

    void parseEnableAWSOrganizationsAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableAWSOrganizationsAccessResponse)
    Q_DISABLE_COPY(EnableAWSOrganizationsAccessResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
