// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECODEAUTHORIZATIONMESSAGERESPONSE_H
#define QTAWS_DECODEAUTHORIZATIONMESSAGERESPONSE_H

#include "stsresponse.h"
#include "decodeauthorizationmessagerequest.h"

namespace QtAws {
namespace Sts {

class DecodeAuthorizationMessageResponsePrivate;

class QTAWSSTS_EXPORT DecodeAuthorizationMessageResponse : public StsResponse {
    Q_OBJECT

public:
    DecodeAuthorizationMessageResponse(const DecodeAuthorizationMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DecodeAuthorizationMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecodeAuthorizationMessageResponse)
    Q_DISABLE_COPY(DecodeAuthorizationMessageResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
