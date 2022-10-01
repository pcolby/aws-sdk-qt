// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETRESPONSE_H
#define QTAWS_GETCONFIGURATIONSETRESPONSE_H

#include "pinpointemailresponse.h"
#include "getconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetConfigurationSetResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetConfigurationSetResponse(const GetConfigurationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigurationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationSetResponse)
    Q_DISABLE_COPY(GetConfigurationSetResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
