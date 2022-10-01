// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBHOOKRESPONSE_H
#define QTAWS_GETWEBHOOKRESPONSE_H

#include "amplifyresponse.h"
#include "getwebhookrequest.h"

namespace QtAws {
namespace Amplify {

class GetWebhookResponsePrivate;

class QTAWSAMPLIFY_EXPORT GetWebhookResponse : public AmplifyResponse {
    Q_OBJECT

public:
    GetWebhookResponse(const GetWebhookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWebhookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebhookResponse)
    Q_DISABLE_COPY(GetWebhookResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
