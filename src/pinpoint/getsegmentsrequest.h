// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTSREQUEST_H
#define QTAWS_GETSEGMENTSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetSegmentsRequest : public PinpointRequest {

public:
    GetSegmentsRequest(const GetSegmentsRequest &other);
    GetSegmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
