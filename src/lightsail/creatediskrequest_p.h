// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKREQUEST_P_H
#define QTAWS_CREATEDISKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "creatediskrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskRequest;

class CreateDiskRequestPrivate : public LightsailRequestPrivate {

public:
    CreateDiskRequestPrivate(const LightsailRequest::Action action,
                                   CreateDiskRequest * const q);
    CreateDiskRequestPrivate(const CreateDiskRequestPrivate &other,
                                   CreateDiskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
