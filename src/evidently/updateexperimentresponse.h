// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTRESPONSE_H
#define QTAWS_UPDATEEXPERIMENTRESPONSE_H

#include "evidentlyresponse.h"
#include "updateexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateExperimentResponsePrivate;

class QTAWSEVIDENTLY_EXPORT UpdateExperimentResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    UpdateExperimentResponse(const UpdateExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExperimentResponse)
    Q_DISABLE_COPY(UpdateExperimentResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
