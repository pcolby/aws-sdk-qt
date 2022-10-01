// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERYCHANNELRESPONSE_H
#define QTAWS_PUTDELIVERYCHANNELRESPONSE_H

#include "configserviceresponse.h"
#include "putdeliverychannelrequest.h"

namespace QtAws {
namespace ConfigService {

class PutDeliveryChannelResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutDeliveryChannelResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutDeliveryChannelResponse(const PutDeliveryChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDeliveryChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDeliveryChannelResponse)
    Q_DISABLE_COPY(PutDeliveryChannelResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
