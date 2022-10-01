// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONINSTANCEREQUEST_P_H

#include "panoramarequest_p.h"
#include "createapplicationinstancerequest.h"

namespace QtAws {
namespace Panorama {

class CreateApplicationInstanceRequest;

class CreateApplicationInstanceRequestPrivate : public PanoramaRequestPrivate {

public:
    CreateApplicationInstanceRequestPrivate(const PanoramaRequest::Action action,
                                   CreateApplicationInstanceRequest * const q);
    CreateApplicationInstanceRequestPrivate(const CreateApplicationInstanceRequestPrivate &other,
                                   CreateApplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationInstanceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
