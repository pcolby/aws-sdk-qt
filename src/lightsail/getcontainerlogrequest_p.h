// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERLOGREQUEST_P_H
#define QTAWS_GETCONTAINERLOGREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerlogrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerLogRequest;

class GetContainerLogRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerLogRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerLogRequest * const q);
    GetContainerLogRequestPrivate(const GetContainerLogRequestPrivate &other,
                                   GetContainerLogRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerLogRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
