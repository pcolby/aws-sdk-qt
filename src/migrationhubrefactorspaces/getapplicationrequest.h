// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_H
#define QTAWS_GETAPPLICATIONREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetApplicationRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT GetApplicationRequest : public MigrationHubRefactorSpacesRequest {

public:
    GetApplicationRequest(const GetApplicationRequest &other);
    GetApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
