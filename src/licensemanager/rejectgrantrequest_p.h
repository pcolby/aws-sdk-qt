// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTGRANTREQUEST_P_H
#define QTAWS_REJECTGRANTREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "rejectgrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class RejectGrantRequest;

class RejectGrantRequestPrivate : public LicenseManagerRequestPrivate {

public:
    RejectGrantRequestPrivate(const LicenseManagerRequest::Action action,
                                   RejectGrantRequest * const q);
    RejectGrantRequestPrivate(const RejectGrantRequestPrivate &other,
                                   RejectGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
