// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONWORKFLOWRESPONSE_H
#define QTAWS_CREATEINTEGRATIONWORKFLOWRESPONSE_H

#include "customerprofilesresponse.h"
#include "createintegrationworkflowrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateIntegrationWorkflowResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT CreateIntegrationWorkflowResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    CreateIntegrationWorkflowResponse(const CreateIntegrationWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIntegrationWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationWorkflowResponse)
    Q_DISABLE_COPY(CreateIntegrationWorkflowResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
