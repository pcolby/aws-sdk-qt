// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTAUTHORIZATIONDETAILSREQUEST_H
#define QTAWS_GETACCOUNTAUTHORIZATIONDETAILSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountAuthorizationDetailsRequestPrivate;

class QTAWSIAM_EXPORT GetAccountAuthorizationDetailsRequest : public IamRequest {

public:
    GetAccountAuthorizationDetailsRequest(const GetAccountAuthorizationDetailsRequest &other);
    GetAccountAuthorizationDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountAuthorizationDetailsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
