// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGAGGREGATORRESPONSE_H
#define QTAWS_DELETEFINDINGAGGREGATORRESPONSE_H

#include "securityhubresponse.h"
#include "deletefindingaggregatorrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteFindingAggregatorResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DeleteFindingAggregatorResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DeleteFindingAggregatorResponse(const DeleteFindingAggregatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFindingAggregatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFindingAggregatorResponse)
    Q_DISABLE_COPY(DeleteFindingAggregatorResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
