// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERVOLUMEREQUEST_P_H
#define QTAWS_REGISTERVOLUMEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "registervolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterVolumeRequest;

class RegisterVolumeRequestPrivate : public OpsWorksRequestPrivate {

public:
    RegisterVolumeRequestPrivate(const OpsWorksRequest::Action action,
                                   RegisterVolumeRequest * const q);
    RegisterVolumeRequestPrivate(const RegisterVolumeRequestPrivate &other,
                                   RegisterVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
