// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMRESPONSE_H
#define QTAWS_DESCRIBEPROBLEMRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describeproblemrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeProblemResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeProblemResponse(const DescribeProblemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProblemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProblemResponse)
    Q_DISABLE_COPY(DescribeProblemResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
