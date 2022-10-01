// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTRECORDINGREQUEST_H
#define QTAWS_STOPCONTACTRECORDINGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StopContactRecordingRequestPrivate;

class QTAWSCONNECT_EXPORT StopContactRecordingRequest : public ConnectRequest {

public:
    StopContactRecordingRequest(const StopContactRecordingRequest &other);
    StopContactRecordingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
