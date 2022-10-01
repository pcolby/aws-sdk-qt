// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENREQUEST_H
#define QTAWS_DELETETOKENREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteTokenRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteTokenRequest : public LicenseManagerRequest {

public:
    DeleteTokenRequest(const DeleteTokenRequest &other);
    DeleteTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTokenRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
