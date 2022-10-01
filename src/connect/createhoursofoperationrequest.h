// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOURSOFOPERATIONREQUEST_H
#define QTAWS_CREATEHOURSOFOPERATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateHoursOfOperationRequestPrivate;

class QTAWSCONNECT_EXPORT CreateHoursOfOperationRequest : public ConnectRequest {

public:
    CreateHoursOfOperationRequest(const CreateHoursOfOperationRequest &other);
    CreateHoursOfOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
