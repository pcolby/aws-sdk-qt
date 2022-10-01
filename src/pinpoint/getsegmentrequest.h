// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTREQUEST_H
#define QTAWS_GETSEGMENTREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentRequestPrivate;

class QTAWSPINPOINT_EXPORT GetSegmentRequest : public PinpointRequest {

public:
    GetSegmentRequest(const GetSegmentRequest &other);
    GetSegmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
