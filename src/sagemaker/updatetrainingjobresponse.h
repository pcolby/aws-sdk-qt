// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAININGJOBRESPONSE_H
#define QTAWS_UPDATETRAININGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "updatetrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrainingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateTrainingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateTrainingJobResponse(const UpdateTrainingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrainingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrainingJobResponse)
    Q_DISABLE_COPY(UpdateTrainingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
