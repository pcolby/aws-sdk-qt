// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGAGGREGATORRESPONSE_H
#define QTAWS_GETFINDINGAGGREGATORRESPONSE_H

#include "securityhubresponse.h"
#include "getfindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingAggregatorResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetFindingAggregatorResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetFindingAggregatorResponse(const GetFindingAggregatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingAggregatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingAggregatorResponse)
    Q_DISABLE_COPY(GetFindingAggregatorResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
