// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGAGGREGATORRESPONSE_H
#define QTAWS_UPDATEFINDINGAGGREGATORRESPONSE_H

#include "securityhubresponse.h"
#include "updatefindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateFindingAggregatorResponsePrivate;

class QTAWSSECURITYHUB_EXPORT UpdateFindingAggregatorResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    UpdateFindingAggregatorResponse(const UpdateFindingAggregatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFindingAggregatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingAggregatorResponse)
    Q_DISABLE_COPY(UpdateFindingAggregatorResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
