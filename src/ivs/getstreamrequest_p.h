// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMREQUEST_P_H
#define QTAWS_GETSTREAMREQUEST_P_H

#include "ivsrequest_p.h"
#include "getstreamrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamRequest;

class GetStreamRequestPrivate : public IvsRequestPrivate {

public:
    GetStreamRequestPrivate(const IvsRequest::Action action,
                                   GetStreamRequest * const q);
    GetStreamRequestPrivate(const GetStreamRequestPrivate &other,
                                   GetStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
