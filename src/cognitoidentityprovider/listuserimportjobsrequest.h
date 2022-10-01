// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERIMPORTJOBSREQUEST_H
#define QTAWS_LISTUSERIMPORTJOBSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserImportJobsRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUserImportJobsRequest : public CognitoIdentityProviderRequest {

public:
    ListUserImportJobsRequest(const ListUserImportJobsRequest &other);
    ListUserImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserImportJobsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
