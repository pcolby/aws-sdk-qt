// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITLEMENTRESPONSE_H
#define QTAWS_DELETEENTITLEMENTRESPONSE_H

#include "appstreamresponse.h"
#include "deleteentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteEntitlementResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteEntitlementResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteEntitlementResponse(const DeleteEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntitlementResponse)
    Q_DISABLE_COPY(DeleteEntitlementResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
