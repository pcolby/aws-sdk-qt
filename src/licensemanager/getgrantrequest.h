// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRANTREQUEST_H
#define QTAWS_GETGRANTREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetGrantRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetGrantRequest : public LicenseManagerRequest {

public:
    GetGrantRequest(const GetGrantRequest &other);
    GetGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
