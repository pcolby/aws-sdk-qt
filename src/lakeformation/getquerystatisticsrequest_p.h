// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATISTICSREQUEST_P_H
#define QTAWS_GETQUERYSTATISTICSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getquerystatisticsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStatisticsRequest;

class GetQueryStatisticsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetQueryStatisticsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetQueryStatisticsRequest * const q);
    GetQueryStatisticsRequestPrivate(const GetQueryStatisticsRequestPrivate &other,
                                   GetQueryStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueryStatisticsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
