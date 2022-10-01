// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTSTREAMINGREQUEST_H
#define QTAWS_STARTCONTACTSTREAMINGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class StartContactStreamingRequestPrivate;

class QTAWSCONNECT_EXPORT StartContactStreamingRequest : public ConnectRequest {

public:
    StartContactStreamingRequest(const StartContactStreamingRequest &other);
    StartContactStreamingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContactStreamingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
