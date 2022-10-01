// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONKEYDETAILSREQUEST_P_H
#define QTAWS_GETDIMENSIONKEYDETAILSREQUEST_P_H

#include "pirequest_p.h"
#include "getdimensionkeydetailsrequest.h"

namespace QtAws {
namespace Pi {

class GetDimensionKeyDetailsRequest;

class GetDimensionKeyDetailsRequestPrivate : public PiRequestPrivate {

public:
    GetDimensionKeyDetailsRequestPrivate(const PiRequest::Action action,
                                   GetDimensionKeyDetailsRequest * const q);
    GetDimensionKeyDetailsRequestPrivate(const GetDimensionKeyDetailsRequestPrivate &other,
                                   GetDimensionKeyDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDimensionKeyDetailsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
