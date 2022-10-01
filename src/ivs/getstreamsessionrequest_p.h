// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMSESSIONREQUEST_P_H
#define QTAWS_GETSTREAMSESSIONREQUEST_P_H

#include "ivsrequest_p.h"
#include "getstreamsessionrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamSessionRequest;

class GetStreamSessionRequestPrivate : public IvsRequestPrivate {

public:
    GetStreamSessionRequestPrivate(const IvsRequest::Action action,
                                   GetStreamSessionRequest * const q);
    GetStreamSessionRequestPrivate(const GetStreamSessionRequestPrivate &other,
                                   GetStreamSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamSessionRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
