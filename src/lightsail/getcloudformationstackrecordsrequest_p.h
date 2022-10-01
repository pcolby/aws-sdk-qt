// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONSTACKRECORDSREQUEST_P_H
#define QTAWS_GETCLOUDFORMATIONSTACKRECORDSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcloudformationstackrecordsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetCloudFormationStackRecordsRequest;

class GetCloudFormationStackRecordsRequestPrivate : public LightsailRequestPrivate {

public:
    GetCloudFormationStackRecordsRequestPrivate(const LightsailRequest::Action action,
                                   GetCloudFormationStackRecordsRequest * const q);
    GetCloudFormationStackRecordsRequestPrivate(const GetCloudFormationStackRecordsRequestPrivate &other,
                                   GetCloudFormationStackRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCloudFormationStackRecordsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
