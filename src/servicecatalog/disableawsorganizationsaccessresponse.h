// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSORGANIZATIONSACCESSRESPONSE_H
#define QTAWS_DISABLEAWSORGANIZATIONSACCESSRESPONSE_H

#include "servicecatalogresponse.h"
#include "disableawsorganizationsaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisableAWSOrganizationsAccessResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DisableAWSOrganizationsAccessResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DisableAWSOrganizationsAccessResponse(const DisableAWSOrganizationsAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableAWSOrganizationsAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAWSOrganizationsAccessResponse)
    Q_DISABLE_COPY(DisableAWSOrganizationsAccessResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
