// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEADDONREQUEST_P_H
#define QTAWS_ENABLEADDONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "enableaddonrequest.h"

namespace QtAws {
namespace Lightsail {

class EnableAddOnRequest;

class EnableAddOnRequestPrivate : public LightsailRequestPrivate {

public:
    EnableAddOnRequestPrivate(const LightsailRequest::Action action,
                                   EnableAddOnRequest * const q);
    EnableAddOnRequestPrivate(const EnableAddOnRequestPrivate &other,
                                   EnableAddOnRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAddOnRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
