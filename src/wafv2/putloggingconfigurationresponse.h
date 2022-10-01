// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTLOGGINGCONFIGURATIONRESPONSE_H

#include "wafv2response.h"
#include "putloggingconfigurationrequest.h"

namespace QtAws {
namespace Wafv2 {

class PutLoggingConfigurationResponsePrivate;

class QTAWSWAFV2_EXPORT PutLoggingConfigurationResponse : public Wafv2Response {
    Q_OBJECT

public:
    PutLoggingConfigurationResponse(const PutLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutLoggingConfigurationResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
