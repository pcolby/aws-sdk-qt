// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXPERIMENTRESPONSE_H
#define QTAWS_STOPEXPERIMENTRESPONSE_H

#include "evidentlyresponse.h"
#include "stopexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class StopExperimentResponsePrivate;

class QTAWSEVIDENTLY_EXPORT StopExperimentResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    StopExperimentResponse(const StopExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopExperimentResponse)
    Q_DISABLE_COPY(StopExperimentResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
