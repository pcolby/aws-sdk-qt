// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRESULTSRESPONSE_H
#define QTAWS_GETINSIGHTRESULTSRESPONSE_H

#include "securityhubresponse.h"
#include "getinsightresultsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInsightResultsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetInsightResultsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetInsightResultsResponse(const GetInsightResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightResultsResponse)
    Q_DISABLE_COPY(GetInsightResultsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
