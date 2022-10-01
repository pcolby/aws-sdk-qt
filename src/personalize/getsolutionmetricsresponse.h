// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOLUTIONMETRICSRESPONSE_H
#define QTAWS_GETSOLUTIONMETRICSRESPONSE_H

#include "personalizeresponse.h"
#include "getsolutionmetricsrequest.h"

namespace QtAws {
namespace Personalize {

class GetSolutionMetricsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT GetSolutionMetricsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    GetSolutionMetricsResponse(const GetSolutionMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSolutionMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSolutionMetricsResponse)
    Q_DISABLE_COPY(GetSolutionMetricsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
