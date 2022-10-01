// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTGRANTREQUEST_H
#define QTAWS_REJECTGRANTREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class RejectGrantRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT RejectGrantRequest : public LicenseManagerRequest {

public:
    RejectGrantRequest(const RejectGrantRequest &other);
    RejectGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
