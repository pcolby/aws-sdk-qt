// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITRESULTSREQUEST_P_H
#define QTAWS_GETWORKUNITRESULTSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getworkunitresultsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitResultsRequest;

class GetWorkUnitResultsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetWorkUnitResultsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetWorkUnitResultsRequest * const q);
    GetWorkUnitResultsRequestPrivate(const GetWorkUnitResultsRequestPrivate &other,
                                   GetWorkUnitResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkUnitResultsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
