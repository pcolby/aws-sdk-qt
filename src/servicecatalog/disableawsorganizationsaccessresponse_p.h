// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSORGANIZATIONSACCESSRESPONSE_P_H
#define QTAWS_DISABLEAWSORGANIZATIONSACCESSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DisableAWSOrganizationsAccessResponse;

class DisableAWSOrganizationsAccessResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DisableAWSOrganizationsAccessResponsePrivate(DisableAWSOrganizationsAccessResponse * const q);

    void parseDisableAWSOrganizationsAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableAWSOrganizationsAccessResponse)
    Q_DISABLE_COPY(DisableAWSOrganizationsAccessResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
