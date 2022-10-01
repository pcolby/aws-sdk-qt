// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITSREQUEST_P_H
#define QTAWS_GETWORKUNITSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getworkunitsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitsRequest;

class GetWorkUnitsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetWorkUnitsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetWorkUnitsRequest * const q);
    GetWorkUnitsRequestPrivate(const GetWorkUnitsRequestPrivate &other,
                                   GetWorkUnitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkUnitsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
