// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEREQUEST_H
#define QTAWS_GETSERVICEREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetServiceRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT GetServiceRequest : public MigrationHubRefactorSpacesRequest {

public:
    GetServiceRequest(const GetServiceRequest &other);
    GetServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
