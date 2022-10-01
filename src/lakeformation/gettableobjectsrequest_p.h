// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEOBJECTSREQUEST_P_H
#define QTAWS_GETTABLEOBJECTSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "gettableobjectsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTableObjectsRequest;

class GetTableObjectsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetTableObjectsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetTableObjectsRequest * const q);
    GetTableObjectsRequestPrivate(const GetTableObjectsRequestPrivate &other,
                                   GetTableObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTableObjectsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
