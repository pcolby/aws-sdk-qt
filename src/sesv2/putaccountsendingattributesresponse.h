// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSENDINGATTRIBUTESRESPONSE_H
#define QTAWS_PUTACCOUNTSENDINGATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putaccountsendingattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountSendingAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutAccountSendingAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutAccountSendingAttributesResponse(const PutAccountSendingAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountSendingAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSendingAttributesResponse)
    Q_DISABLE_COPY(PutAccountSendingAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
