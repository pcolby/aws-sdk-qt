// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTRESPONSE_H
#define QTAWS_DELETEEXPERIMENTRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteexperimentrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteExperimentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteExperimentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteExperimentResponse(const DeleteExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperimentResponse)
    Q_DISABLE_COPY(DeleteExperimentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
