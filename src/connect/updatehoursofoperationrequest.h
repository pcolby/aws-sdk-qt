// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOURSOFOPERATIONREQUEST_H
#define QTAWS_UPDATEHOURSOFOPERATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateHoursOfOperationRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateHoursOfOperationRequest : public ConnectRequest {

public:
    UpdateHoursOfOperationRequest(const UpdateHoursOfOperationRequest &other);
    UpdateHoursOfOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
