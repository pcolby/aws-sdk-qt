// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSORGANIZATIONSACCESSSTATUSRESPONSE_H
#define QTAWS_GETAWSORGANIZATIONSACCESSSTATUSRESPONSE_H

#include "servicecatalogresponse.h"
#include "getawsorganizationsaccessstatusrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class GetAWSOrganizationsAccessStatusResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT GetAWSOrganizationsAccessStatusResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    GetAWSOrganizationsAccessStatusResponse(const GetAWSOrganizationsAccessStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAWSOrganizationsAccessStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAWSOrganizationsAccessStatusResponse)
    Q_DISABLE_COPY(GetAWSOrganizationsAccessStatusResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
