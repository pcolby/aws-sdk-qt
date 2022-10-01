// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTVERSIONREQUEST_H
#define QTAWS_CREATEGRANTVERSIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateGrantVersionRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateGrantVersionRequest : public LicenseManagerRequest {

public:
    CreateGrantVersionRequest(const CreateGrantVersionRequest &other);
    CreateGrantVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGrantVersionRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
