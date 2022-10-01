// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_H
#define QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "disablehealthserviceaccessfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DisableHealthServiceAccessForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT DisableHealthServiceAccessForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    DisableHealthServiceAccessForOrganizationResponse(const DisableHealthServiceAccessForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableHealthServiceAccessForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableHealthServiceAccessForOrganizationResponse)
    Q_DISABLE_COPY(DisableHealthServiceAccessForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
