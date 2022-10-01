// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSRESPONSE_H
#define QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSRESPONSE_H

#include "sesv2response.h"
#include "putconfigurationsetsendingoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetSendingOptionsResponsePrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetSendingOptionsResponse : public SESv2Response {
    Q_OBJECT

public:
    PutConfigurationSetSendingOptionsResponse(const PutConfigurationSetSendingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigurationSetSendingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetSendingOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetSendingOptionsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
