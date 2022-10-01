// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRANSFORMJOBRESPONSE_H
#define QTAWS_STOPTRANSFORMJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stoptransformjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopTransformJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopTransformJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopTransformJobResponse(const StopTransformJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTransformJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTransformJobResponse)
    Q_DISABLE_COPY(StopTransformJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
