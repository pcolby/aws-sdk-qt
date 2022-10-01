// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCARDINALITYREQUEST_P_H
#define QTAWS_GETCARDINALITYREQUEST_P_H

#include "iotrequest_p.h"
#include "getcardinalityrequest.h"

namespace QtAws {
namespace IoT {

class GetCardinalityRequest;

class GetCardinalityRequestPrivate : public IoTRequestPrivate {

public:
    GetCardinalityRequestPrivate(const IoTRequest::Action action,
                                   GetCardinalityRequest * const q);
    GetCardinalityRequestPrivate(const GetCardinalityRequestPrivate &other,
                                   GetCardinalityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCardinalityRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
