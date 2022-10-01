// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_P_H
#define QTAWS_GETENVIRONMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "getenvironmentrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentRequest;

class GetEnvironmentRequestPrivate : public ProtonRequestPrivate {

public:
    GetEnvironmentRequestPrivate(const ProtonRequest::Action action,
                                   GetEnvironmentRequest * const q);
    GetEnvironmentRequestPrivate(const GetEnvironmentRequestPrivate &other,
                                   GetEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
