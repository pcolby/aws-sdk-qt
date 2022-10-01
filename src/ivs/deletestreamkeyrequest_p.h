// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMKEYREQUEST_P_H
#define QTAWS_DELETESTREAMKEYREQUEST_P_H

#include "ivsrequest_p.h"
#include "deletestreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteStreamKeyRequest;

class DeleteStreamKeyRequestPrivate : public IvsRequestPrivate {

public:
    DeleteStreamKeyRequestPrivate(const IvsRequest::Action action,
                                   DeleteStreamKeyRequest * const q);
    DeleteStreamKeyRequestPrivate(const DeleteStreamKeyRequestPrivate &other,
                                   DeleteStreamKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamKeyRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
