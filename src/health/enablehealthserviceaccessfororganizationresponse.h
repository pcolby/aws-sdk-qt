// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_H
#define QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "enablehealthserviceaccessfororganizationrequest.h"

namespace QtAws {
namespace Health {

class EnableHealthServiceAccessForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT EnableHealthServiceAccessForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    EnableHealthServiceAccessForOrganizationResponse(const EnableHealthServiceAccessForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableHealthServiceAccessForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableHealthServiceAccessForOrganizationResponse)
    Q_DISABLE_COPY(EnableHealthServiceAccessForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
