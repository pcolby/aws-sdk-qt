// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESRESPONSE_H
#define QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putaccountsuppressionattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountSuppressionAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutAccountSuppressionAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutAccountSuppressionAttributesResponse(const PutAccountSuppressionAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountSuppressionAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSuppressionAttributesResponse)
    Q_DISABLE_COPY(PutAccountSuppressionAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
