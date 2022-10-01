// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMKEYREQUEST_P_H
#define QTAWS_GETSTREAMKEYREQUEST_P_H

#include "ivsrequest_p.h"
#include "getstreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamKeyRequest;

class GetStreamKeyRequestPrivate : public IvsRequestPrivate {

public:
    GetStreamKeyRequestPrivate(const IvsRequest::Action action,
                                   GetStreamKeyRequest * const q);
    GetStreamKeyRequestPrivate(const GetStreamKeyRequestPrivate &other,
                                   GetStreamKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamKeyRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
