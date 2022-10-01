// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESEGMENTREQUEST_H
#define QTAWS_UPDATESEGMENTREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSegmentRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateSegmentRequest : public PinpointRequest {

public:
    UpdateSegmentRequest(const UpdateSegmentRequest &other);
    UpdateSegmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
