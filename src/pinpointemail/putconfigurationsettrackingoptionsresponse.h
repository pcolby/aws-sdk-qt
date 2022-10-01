// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H
#define QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H

#include "pinpointemailresponse.h"
#include "putconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetTrackingOptionsResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutConfigurationSetTrackingOptionsResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutConfigurationSetTrackingOptionsResponse(const PutConfigurationSetTrackingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigurationSetTrackingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetTrackingOptionsResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
