// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONREQUEST_P_H
#define QTAWS_GETSIPMEDIAAPPLICATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getsipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationRequest;

class GetSipMediaApplicationRequestPrivate : public ChimeRequestPrivate {

public:
    GetSipMediaApplicationRequestPrivate(const ChimeRequest::Action action,
                                   GetSipMediaApplicationRequest * const q);
    GetSipMediaApplicationRequestPrivate(const GetSipMediaApplicationRequestPrivate &other,
                                   GetSipMediaApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
