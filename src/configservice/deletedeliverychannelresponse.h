// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYCHANNELRESPONSE_H
#define QTAWS_DELETEDELIVERYCHANNELRESPONSE_H

#include "configserviceresponse.h"
#include "deletedeliverychannelrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteDeliveryChannelResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteDeliveryChannelResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteDeliveryChannelResponse(const DeleteDeliveryChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeliveryChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeliveryChannelResponse)
    Q_DISABLE_COPY(DeleteDeliveryChannelResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
