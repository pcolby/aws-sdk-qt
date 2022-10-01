// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESPONSE_H
#define QTAWS_GETEXPERIMENTRESPONSE_H

#include "evidentlyresponse.h"
#include "getexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class GetExperimentResponsePrivate;

class QTAWSEVIDENTLY_EXPORT GetExperimentResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    GetExperimentResponse(const GetExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentResponse)
    Q_DISABLE_COPY(GetExperimentResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
