// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSREQUEST_P_H
#define QTAWS_GETOPERATIONSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getoperationsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsRequest;

class GetOperationsRequestPrivate : public LightsailRequestPrivate {

public:
    GetOperationsRequestPrivate(const LightsailRequest::Action action,
                                   GetOperationsRequest * const q);
    GetOperationsRequestPrivate(const GetOperationsRequestPrivate &other,
                                   GetOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOperationsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
