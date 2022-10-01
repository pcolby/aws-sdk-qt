// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITLEMENTRESPONSE_H
#define QTAWS_CREATEENTITLEMENTRESPONSE_H

#include "appstreamresponse.h"
#include "createentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class CreateEntitlementResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateEntitlementResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateEntitlementResponse(const CreateEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEntitlementResponse)
    Q_DISABLE_COPY(CreateEntitlementResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
