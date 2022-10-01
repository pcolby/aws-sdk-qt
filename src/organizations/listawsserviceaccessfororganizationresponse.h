// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONRESPONSE_H
#define QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "listawsserviceaccessfororganizationrequest.h"

namespace QtAws {
namespace Organizations {

class ListAWSServiceAccessForOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListAWSServiceAccessForOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListAWSServiceAccessForOrganizationResponse(const ListAWSServiceAccessForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAWSServiceAccessForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAWSServiceAccessForOrganizationResponse)
    Q_DISABLE_COPY(ListAWSServiceAccessForOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
