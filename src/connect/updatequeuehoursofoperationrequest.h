// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEHOURSOFOPERATIONREQUEST_H
#define QTAWS_UPDATEQUEUEHOURSOFOPERATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueHoursOfOperationRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateQueueHoursOfOperationRequest : public ConnectRequest {

public:
    UpdateQueueHoursOfOperationRequest(const UpdateQueueHoursOfOperationRequest &other);
    UpdateQueueHoursOfOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
