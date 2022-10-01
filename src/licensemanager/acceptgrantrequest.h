// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTGRANTREQUEST_H
#define QTAWS_ACCEPTGRANTREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class AcceptGrantRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT AcceptGrantRequest : public LicenseManagerRequest {

public:
    AcceptGrantRequest(const AcceptGrantRequest &other);
    AcceptGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
