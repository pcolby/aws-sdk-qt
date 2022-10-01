// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPOTPLACEMENTSCORESREQUEST_P_H
#define QTAWS_GETSPOTPLACEMENTSCORESREQUEST_P_H

#include "ec2request_p.h"
#include "getspotplacementscoresrequest.h"

namespace QtAws {
namespace Ec2 {

class GetSpotPlacementScoresRequest;

class GetSpotPlacementScoresRequestPrivate : public Ec2RequestPrivate {

public:
    GetSpotPlacementScoresRequestPrivate(const Ec2Request::Action action,
                                   GetSpotPlacementScoresRequest * const q);
    GetSpotPlacementScoresRequestPrivate(const GetSpotPlacementScoresRequestPrivate &other,
                                   GetSpotPlacementScoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSpotPlacementScoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
