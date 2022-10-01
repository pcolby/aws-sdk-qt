// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONREQUEST_P_H
#define QTAWS_GETACTIONREQUEST_P_H

#include "fisrequest_p.h"
#include "getactionrequest.h"

namespace QtAws {
namespace Fis {

class GetActionRequest;

class GetActionRequestPrivate : public FisRequestPrivate {

public:
    GetActionRequestPrivate(const FisRequest::Action action,
                                   GetActionRequest * const q);
    GetActionRequestPrivate(const GetActionRequestPrivate &other,
                                   GetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetActionRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
