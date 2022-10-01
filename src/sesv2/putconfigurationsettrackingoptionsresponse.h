// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H
#define QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H

#include "sesv2response.h"
#include "putconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetTrackingOptionsResponsePrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetTrackingOptionsResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
