// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESRESPONSE_H
#define QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESRESPONSE_H

#include "sesresponse.h"
#include "getidentitynotificationattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityNotificationAttributesResponsePrivate;

class QTAWSSES_EXPORT GetIdentityNotificationAttributesResponse : public SesResponse {
    Q_OBJECT

public:
    GetIdentityNotificationAttributesResponse(const GetIdentityNotificationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityNotificationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityNotificationAttributesResponse)
    Q_DISABLE_COPY(GetIdentityNotificationAttributesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
