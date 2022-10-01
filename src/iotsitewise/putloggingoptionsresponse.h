// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGOPTIONSRESPONSE_H
#define QTAWS_PUTLOGGINGOPTIONSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "putloggingoptionsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class PutLoggingOptionsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT PutLoggingOptionsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    PutLoggingOptionsResponse(const PutLoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLoggingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingOptionsResponse)
    Q_DISABLE_COPY(PutLoggingOptionsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
