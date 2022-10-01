// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRANTREQUEST_P_H
#define QTAWS_DELETEGRANTREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "deletegrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteGrantRequest;

class DeleteGrantRequestPrivate : public LicenseManagerRequestPrivate {

public:
    DeleteGrantRequestPrivate(const LicenseManagerRequest::Action action,
                                   DeleteGrantRequest * const q);
    DeleteGrantRequestPrivate(const DeleteGrantRequestPrivate &other,
                                   DeleteGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
