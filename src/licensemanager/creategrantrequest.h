// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTREQUEST_H
#define QTAWS_CREATEGRANTREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateGrantRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateGrantRequest : public LicenseManagerRequest {

public:
    CreateGrantRequest(const CreateGrantRequest &other);
    CreateGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
