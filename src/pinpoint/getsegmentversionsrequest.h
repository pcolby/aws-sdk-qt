// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONSREQUEST_H
#define QTAWS_GETSEGMENTVERSIONSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetSegmentVersionsRequest : public PinpointRequest {

public:
    GetSegmentVersionsRequest(const GetSegmentVersionsRequest &other);
    GetSegmentVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentVersionsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
