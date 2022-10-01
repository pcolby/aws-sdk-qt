// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUESTSTATUSRESPONSE_H
#define QTAWS_GETRESOURCEREQUESTSTATUSRESPONSE_H

#include "cloudcontrolresponse.h"
#include "getresourcerequeststatusrequest.h"

namespace QtAws {
namespace CloudControl {

class GetResourceRequestStatusResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT GetResourceRequestStatusResponse : public CloudControlResponse {
    Q_OBJECT

public:
    GetResourceRequestStatusResponse(const GetResourceRequestStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceRequestStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceRequestStatusResponse)
    Q_DISABLE_COPY(GetResourceRequestStatusResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
