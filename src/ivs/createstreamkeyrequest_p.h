// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMKEYREQUEST_P_H
#define QTAWS_CREATESTREAMKEYREQUEST_P_H

#include "ivsrequest_p.h"
#include "createstreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class CreateStreamKeyRequest;

class CreateStreamKeyRequestPrivate : public IvsRequestPrivate {

public:
    CreateStreamKeyRequestPrivate(const IvsRequest::Action action,
                                   CreateStreamKeyRequest * const q);
    CreateStreamKeyRequestPrivate(const CreateStreamKeyRequestPrivate &other,
                                   CreateStreamKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamKeyRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
