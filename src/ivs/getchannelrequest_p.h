// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELREQUEST_P_H
#define QTAWS_GETCHANNELREQUEST_P_H

#include "ivsrequest_p.h"
#include "getchannelrequest.h"

namespace QtAws {
namespace Ivs {

class GetChannelRequest;

class GetChannelRequestPrivate : public IvsRequestPrivate {

public:
    GetChannelRequestPrivate(const IvsRequest::Action action,
                                   GetChannelRequest * const q);
    GetChannelRequestPrivate(const GetChannelRequestPrivate &other,
                                   GetChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
