// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTRECORDINGREQUEST_H
#define QTAWS_STARTCONTACTRECORDINGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StartContactRecordingRequestPrivate;

class QTAWSCONNECT_EXPORT StartContactRecordingRequest : public ConnectRequest {

public:
    StartContactRecordingRequest(const StartContactRecordingRequest &other);
    StartContactRecordingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
