// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREQUEST_H
#define QTAWS_GETAPPREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAppRequestPrivate;

class QTAWSPINPOINT_EXPORT GetAppRequest : public PinpointRequest {

public:
    GetAppRequest(const GetAppRequest &other);
    GetAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
