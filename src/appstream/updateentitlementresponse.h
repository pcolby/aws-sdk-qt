// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITLEMENTRESPONSE_H
#define QTAWS_UPDATEENTITLEMENTRESPONSE_H

#include "appstreamresponse.h"
#include "updateentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateEntitlementResponsePrivate;

class QTAWSAPPSTREAM_EXPORT UpdateEntitlementResponse : public AppStreamResponse {
    Q_OBJECT

public:
    UpdateEntitlementResponse(const UpdateEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEntitlementResponse)
    Q_DISABLE_COPY(UpdateEntitlementResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
