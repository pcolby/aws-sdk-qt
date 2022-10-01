// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEREQUEST_H
#define QTAWS_CREATESERVICEREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class CreateServiceRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT CreateServiceRequest : public MigrationHubRefactorSpacesRequest {

public:
    CreateServiceRequest(const CreateServiceRequest &other);
    CreateServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
