// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILCHANNELREQUEST_H
#define QTAWS_DELETEEMAILCHANNELREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailChannelRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteEmailChannelRequest : public PinpointRequest {

public:
    DeleteEmailChannelRequest(const DeleteEmailChannelRequest &other);
    DeleteEmailChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
