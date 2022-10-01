// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSEREQUEST_H
#define QTAWS_DELETELICENSEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteLicenseRequest : public LicenseManagerRequest {

public:
    DeleteLicenseRequest(const DeleteLicenseRequest &other);
    DeleteLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
