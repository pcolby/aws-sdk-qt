// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSORGANIZATIONSACCESSRESPONSE_H
#define QTAWS_ENABLEAWSORGANIZATIONSACCESSRESPONSE_H

#include "servicecatalogresponse.h"
#include "enableawsorganizationsaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class EnableAWSOrganizationsAccessResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT EnableAWSOrganizationsAccessResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    EnableAWSOrganizationsAccessResponse(const EnableAWSOrganizationsAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAWSOrganizationsAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAWSOrganizationsAccessResponse)
    Q_DISABLE_COPY(EnableAWSOrganizationsAccessResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
