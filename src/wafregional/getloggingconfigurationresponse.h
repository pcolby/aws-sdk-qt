// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETLOGGINGCONFIGURATIONRESPONSE_H

#include "wafregionalresponse.h"
#include "getloggingconfigurationrequest.h"

namespace QtAws {
namespace WafRegional {

class GetLoggingConfigurationResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetLoggingConfigurationResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetLoggingConfigurationResponse(const GetLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetLoggingConfigurationResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
