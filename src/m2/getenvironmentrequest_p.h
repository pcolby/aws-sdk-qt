// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_P_H
#define QTAWS_GETENVIRONMENTREQUEST_P_H

#include "m2request_p.h"
#include "getenvironmentrequest.h"

namespace QtAws {
namespace M2 {

class GetEnvironmentRequest;

class GetEnvironmentRequestPrivate : public M2RequestPrivate {

public:
    GetEnvironmentRequestPrivate(const M2Request::Action action,
                                   GetEnvironmentRequest * const q);
    GetEnvironmentRequestPrivate(const GetEnvironmentRequestPrivate &other,
                                   GetEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentRequest)

};

} // namespace M2
} // namespace QtAws

#endif
