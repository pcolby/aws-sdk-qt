// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDCONTACTRECORDINGREQUEST_H
#define QTAWS_SUSPENDCONTACTRECORDINGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class SuspendContactRecordingRequestPrivate;

class QTAWSCONNECT_EXPORT SuspendContactRecordingRequest : public ConnectRequest {

public:
    SuspendContactRecordingRequest(const SuspendContactRecordingRequest &other);
    SuspendContactRecordingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SuspendContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
