// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTACCESSREQUEST_P_H
#define QTAWS_GRANTACCESSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "grantaccessrequest.h"

namespace QtAws {
namespace OpsWorks {

class GrantAccessRequest;

class GrantAccessRequestPrivate : public OpsWorksRequestPrivate {

public:
    GrantAccessRequestPrivate(const OpsWorksRequest::Action action,
                                   GrantAccessRequest * const q);
    GrantAccessRequestPrivate(const GrantAccessRequestPrivate &other,
                                   GrantAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(GrantAccessRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
