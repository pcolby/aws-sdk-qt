// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSTOKENREQUEST_H
#define QTAWS_GETACCESSTOKENREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetAccessTokenRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetAccessTokenRequest : public LicenseManagerRequest {

public:
    GetAccessTokenRequest(const GetAccessTokenRequest &other);
    GetAccessTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessTokenRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
