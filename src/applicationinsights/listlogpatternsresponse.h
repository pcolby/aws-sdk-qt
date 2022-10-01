// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSRESPONSE_H
#define QTAWS_LISTLOGPATTERNSRESPONSE_H

#include "applicationinsightsresponse.h"
#include "listlogpatternsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternsResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListLogPatternsResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    ListLogPatternsResponse(const ListLogPatternsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLogPatternsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLogPatternsResponse)
    Q_DISABLE_COPY(ListLogPatternsResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
