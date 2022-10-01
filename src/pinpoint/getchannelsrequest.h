// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSREQUEST_H
#define QTAWS_GETCHANNELSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetChannelsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetChannelsRequest : public PinpointRequest {

public:
    GetChannelsRequest(const GetChannelsRequest &other);
    GetChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
