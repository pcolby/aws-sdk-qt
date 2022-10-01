// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRANTREQUEST_H
#define QTAWS_DELETEGRANTREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteGrantRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteGrantRequest : public LicenseManagerRequest {

public:
    DeleteGrantRequest(const DeleteGrantRequest &other);
    DeleteGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
