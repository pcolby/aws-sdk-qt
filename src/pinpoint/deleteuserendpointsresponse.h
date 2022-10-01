// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERENDPOINTSRESPONSE_H
#define QTAWS_DELETEUSERENDPOINTSRESPONSE_H

#include "pinpointresponse.h"
#include "deleteuserendpointsrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteUserEndpointsResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteUserEndpointsResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteUserEndpointsResponse(const DeleteUserEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserEndpointsResponse)
    Q_DISABLE_COPY(DeleteUserEndpointsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
