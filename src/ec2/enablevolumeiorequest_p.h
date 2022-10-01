// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVOLUMEIOREQUEST_P_H
#define QTAWS_ENABLEVOLUMEIOREQUEST_P_H

#include "ec2request_p.h"
#include "enablevolumeiorequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVolumeIORequest;

class EnableVolumeIORequestPrivate : public Ec2RequestPrivate {

public:
    EnableVolumeIORequestPrivate(const Ec2Request::Action action,
                                   EnableVolumeIORequest * const q);
    EnableVolumeIORequestPrivate(const EnableVolumeIORequestPrivate &other,
                                   EnableVolumeIORequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableVolumeIORequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
