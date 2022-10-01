// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEREQUEST_P_H
#define QTAWS_DELETEINSTANCEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleteinstancerequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceRequest;

class DeleteInstanceRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteInstanceRequestPrivate(const LightsailRequest::Action action,
                                   DeleteInstanceRequest * const q);
    DeleteInstanceRequestPrivate(const DeleteInstanceRequestPrivate &other,
                                   DeleteInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
