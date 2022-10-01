// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSETSRESPONSE_H
#define QTAWS_LISTLOGPATTERNSETSRESPONSE_H

#include "applicationinsightsresponse.h"
#include "listlogpatternsetsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternSetsResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListLogPatternSetsResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    ListLogPatternSetsResponse(const ListLogPatternSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLogPatternSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLogPatternSetsResponse)
    Q_DISABLE_COPY(ListLogPatternSetsResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
