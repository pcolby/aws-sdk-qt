// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKNOWNHOSTKEYSREQUEST_P_H
#define QTAWS_DELETEKNOWNHOSTKEYSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleteknownhostkeysrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteKnownHostKeysRequest;

class DeleteKnownHostKeysRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteKnownHostKeysRequestPrivate(const LightsailRequest::Action action,
                                   DeleteKnownHostKeysRequest * const q);
    DeleteKnownHostKeysRequestPrivate(const DeleteKnownHostKeysRequestPrivate &other,
                                   DeleteKnownHostKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKnownHostKeysRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
