// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATECHANNELMEMBERSHIPRESPONSE_H
#define QTAWS_BATCHCREATECHANNELMEMBERSHIPRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "batchcreatechannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class BatchCreateChannelMembershipResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT BatchCreateChannelMembershipResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    BatchCreateChannelMembershipResponse(const BatchCreateChannelMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreateChannelMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateChannelMembershipResponse)
    Q_DISABLE_COPY(BatchCreateChannelMembershipResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
