// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERCENTILESREQUEST_P_H
#define QTAWS_GETPERCENTILESREQUEST_P_H

#include "iotrequest_p.h"
#include "getpercentilesrequest.h"

namespace QtAws {
namespace IoT {

class GetPercentilesRequest;

class GetPercentilesRequestPrivate : public IoTRequestPrivate {

public:
    GetPercentilesRequestPrivate(const IoTRequest::Action action,
                                   GetPercentilesRequest * const q);
    GetPercentilesRequestPrivate(const GetPercentilesRequestPrivate &other,
                                   GetPercentilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPercentilesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
