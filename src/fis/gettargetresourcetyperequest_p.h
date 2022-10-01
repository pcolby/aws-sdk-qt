// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTARGETRESOURCETYPEREQUEST_P_H
#define QTAWS_GETTARGETRESOURCETYPEREQUEST_P_H

#include "fisrequest_p.h"
#include "gettargetresourcetyperequest.h"

namespace QtAws {
namespace Fis {

class GetTargetResourceTypeRequest;

class GetTargetResourceTypeRequestPrivate : public FisRequestPrivate {

public:
    GetTargetResourceTypeRequestPrivate(const FisRequest::Action action,
                                   GetTargetResourceTypeRequest * const q);
    GetTargetResourceTypeRequestPrivate(const GetTargetResourceTypeRequestPrivate &other,
                                   GetTargetResourceTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTargetResourceTypeRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
