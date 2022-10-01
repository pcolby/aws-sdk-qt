// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTGRANTREQUEST_P_H
#define QTAWS_ACCEPTGRANTREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "acceptgrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class AcceptGrantRequest;

class AcceptGrantRequestPrivate : public LicenseManagerRequestPrivate {

public:
    AcceptGrantRequestPrivate(const LicenseManagerRequest::Action action,
                                   AcceptGrantRequest * const q);
    AcceptGrantRequestPrivate(const AcceptGrantRequestPrivate &other,
                                   AcceptGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
