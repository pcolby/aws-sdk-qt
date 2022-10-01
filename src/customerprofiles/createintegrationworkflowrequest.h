// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONWORKFLOWREQUEST_H
#define QTAWS_CREATEINTEGRATIONWORKFLOWREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateIntegrationWorkflowRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT CreateIntegrationWorkflowRequest : public CustomerProfilesRequest {

public:
    CreateIntegrationWorkflowRequest(const CreateIntegrationWorkflowRequest &other);
    CreateIntegrationWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationWorkflowRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
