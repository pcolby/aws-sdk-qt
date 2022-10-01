// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_P_H
#define QTAWS_GETENVIRONMENTREQUEST_P_H

#include "mwaarequest_p.h"
#include "getenvironmentrequest.h"

namespace QtAws {
namespace Mwaa {

class GetEnvironmentRequest;

class GetEnvironmentRequestPrivate : public MwaaRequestPrivate {

public:
    GetEnvironmentRequestPrivate(const MwaaRequest::Action action,
                                   GetEnvironmentRequest * const q);
    GetEnvironmentRequestPrivate(const GetEnvironmentRequestPrivate &other,
                                   GetEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
