// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESULTSRESPONSE_H
#define QTAWS_GETEXPERIMENTRESULTSRESPONSE_H

#include "evidentlyresponse.h"
#include "getexperimentresultsrequest.h"

namespace QtAws {
namespace Evidently {

class GetExperimentResultsResponsePrivate;

class QTAWSEVIDENTLY_EXPORT GetExperimentResultsResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    GetExperimentResultsResponse(const GetExperimentResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExperimentResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentResultsResponse)
    Q_DISABLE_COPY(GetExperimentResultsResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
