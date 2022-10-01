// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUPPRESSEDDESTINATIONRESPONSE_H
#define QTAWS_PUTSUPPRESSEDDESTINATIONRESPONSE_H

#include "sesv2response.h"
#include "putsuppresseddestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class PutSuppressedDestinationResponsePrivate;

class QTAWSSESV2_EXPORT PutSuppressedDestinationResponse : public SESv2Response {
    Q_OBJECT

public:
    PutSuppressedDestinationResponse(const PutSuppressedDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSuppressedDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSuppressedDestinationResponse)
    Q_DISABLE_COPY(PutSuppressedDestinationResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
