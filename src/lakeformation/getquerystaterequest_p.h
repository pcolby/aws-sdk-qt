// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATEREQUEST_P_H
#define QTAWS_GETQUERYSTATEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getquerystaterequest.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStateRequest;

class GetQueryStateRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetQueryStateRequestPrivate(const LakeFormationRequest::Action action,
                                   GetQueryStateRequest * const q);
    GetQueryStateRequestPrivate(const GetQueryStateRequestPrivate &other,
                                   GetQueryStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueryStateRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
