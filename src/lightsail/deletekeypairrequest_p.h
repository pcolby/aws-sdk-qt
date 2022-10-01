// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYPAIRREQUEST_P_H
#define QTAWS_DELETEKEYPAIRREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletekeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteKeyPairRequest;

class DeleteKeyPairRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteKeyPairRequestPrivate(const LightsailRequest::Action action,
                                   DeleteKeyPairRequest * const q);
    DeleteKeyPairRequestPrivate(const DeleteKeyPairRequestPrivate &other,
                                   DeleteKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
