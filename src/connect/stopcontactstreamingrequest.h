// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTSTREAMINGREQUEST_H
#define QTAWS_STOPCONTACTSTREAMINGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StopContactStreamingRequestPrivate;

class QTAWSCONNECT_EXPORT StopContactStreamingRequest : public ConnectRequest {

public:
    StopContactStreamingRequest(const StopContactStreamingRequest &other);
    StopContactStreamingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContactStreamingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
