// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCEREQUEST_P_H
#define QTAWS_REBOOTINSTANCEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "rebootinstancerequest.h"

namespace QtAws {
namespace Lightsail {

class RebootInstanceRequest;

class RebootInstanceRequestPrivate : public LightsailRequestPrivate {

public:
    RebootInstanceRequestPrivate(const LightsailRequest::Action action,
                                   RebootInstanceRequest * const q);
    RebootInstanceRequestPrivate(const RebootInstanceRequestPrivate &other,
                                   RebootInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
