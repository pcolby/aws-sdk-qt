// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAPPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_REMOVEAPPLICATIONINSTANCEREQUEST_P_H

#include "panoramarequest_p.h"
#include "removeapplicationinstancerequest.h"

namespace QtAws {
namespace Panorama {

class RemoveApplicationInstanceRequest;

class RemoveApplicationInstanceRequestPrivate : public PanoramaRequestPrivate {

public:
    RemoveApplicationInstanceRequestPrivate(const PanoramaRequest::Action action,
                                   RemoveApplicationInstanceRequest * const q);
    RemoveApplicationInstanceRequestPrivate(const RemoveApplicationInstanceRequestPrivate &other,
                                   RemoveApplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveApplicationInstanceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
