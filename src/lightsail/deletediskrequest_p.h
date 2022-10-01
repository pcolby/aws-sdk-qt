// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISKREQUEST_P_H
#define QTAWS_DELETEDISKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletediskrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskRequest;

class DeleteDiskRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteDiskRequestPrivate(const LightsailRequest::Action action,
                                   DeleteDiskRequest * const q);
    DeleteDiskRequestPrivate(const DeleteDiskRequestPrivate &other,
                                   DeleteDiskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
