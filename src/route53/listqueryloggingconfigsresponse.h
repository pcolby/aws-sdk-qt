// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYLOGGINGCONFIGSRESPONSE_H
#define QTAWS_LISTQUERYLOGGINGCONFIGSRESPONSE_H

#include "route53response.h"
#include "listqueryloggingconfigsrequest.h"

namespace QtAws {
namespace Route53 {

class ListQueryLoggingConfigsResponsePrivate;

class QTAWSROUTE53_EXPORT ListQueryLoggingConfigsResponse : public Route53Response {
    Q_OBJECT

public:
    ListQueryLoggingConfigsResponse(const ListQueryLoggingConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueryLoggingConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueryLoggingConfigsResponse)
    Q_DISABLE_COPY(ListQueryLoggingConfigsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
