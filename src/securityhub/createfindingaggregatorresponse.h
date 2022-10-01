// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGAGGREGATORRESPONSE_H
#define QTAWS_CREATEFINDINGAGGREGATORRESPONSE_H

#include "securityhubresponse.h"
#include "createfindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateFindingAggregatorResponsePrivate;

class QTAWSSECURITYHUB_EXPORT CreateFindingAggregatorResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    CreateFindingAggregatorResponse(const CreateFindingAggregatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFindingAggregatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFindingAggregatorResponse)
    Q_DISABLE_COPY(CreateFindingAggregatorResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
