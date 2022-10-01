// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTSCHEDULEREQUEST_H
#define QTAWS_UPDATECONTACTSCHEDULEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactScheduleRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateContactScheduleRequest : public ConnectRequest {

public:
    UpdateContactScheduleRequest(const UpdateContactScheduleRequest &other);
    UpdateContactScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactScheduleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
