// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOURSOFOPERATIONREQUEST_H
#define QTAWS_DELETEHOURSOFOPERATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteHoursOfOperationRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteHoursOfOperationRequest : public ConnectRequest {

public:
    DeleteHoursOfOperationRequest(const DeleteHoursOfOperationRequest &other);
    DeleteHoursOfOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
