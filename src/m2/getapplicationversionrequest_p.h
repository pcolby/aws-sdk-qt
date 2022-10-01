// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONVERSIONREQUEST_P_H

#include "m2request_p.h"
#include "getapplicationversionrequest.h"

namespace QtAws {
namespace M2 {

class GetApplicationVersionRequest;

class GetApplicationVersionRequestPrivate : public M2RequestPrivate {

public:
    GetApplicationVersionRequestPrivate(const M2Request::Action action,
                                   GetApplicationVersionRequest * const q);
    GetApplicationVersionRequestPrivate(const GetApplicationVersionRequestPrivate &other,
                                   GetApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationVersionRequest)

};

} // namespace M2
} // namespace QtAws

#endif
