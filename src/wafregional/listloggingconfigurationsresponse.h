// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSRESPONSE_H

#include "wafregionalresponse.h"
#include "listloggingconfigurationsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListLoggingConfigurationsResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListLoggingConfigurationsResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListLoggingConfigurationsResponse(const ListLoggingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLoggingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLoggingConfigurationsResponse)
    Q_DISABLE_COPY(ListLoggingConfigurationsResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
