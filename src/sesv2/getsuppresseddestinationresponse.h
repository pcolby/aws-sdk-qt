// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPRESSEDDESTINATIONRESPONSE_H
#define QTAWS_GETSUPPRESSEDDESTINATIONRESPONSE_H

#include "sesv2response.h"
#include "getsuppresseddestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class GetSuppressedDestinationResponsePrivate;

class QTAWSSESV2_EXPORT GetSuppressedDestinationResponse : public SESv2Response {
    Q_OBJECT

public:
    GetSuppressedDestinationResponse(const GetSuppressedDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSuppressedDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuppressedDestinationResponse)
    Q_DISABLE_COPY(GetSuppressedDestinationResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
