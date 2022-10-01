// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROBLEMSRESPONSE_H
#define QTAWS_LISTPROBLEMSRESPONSE_H

#include "applicationinsightsresponse.h"
#include "listproblemsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListProblemsResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListProblemsResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    ListProblemsResponse(const ListProblemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProblemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProblemsResponse)
    Q_DISABLE_COPY(ListProblemsResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
