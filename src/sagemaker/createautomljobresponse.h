// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOMLJOBRESPONSE_H
#define QTAWS_CREATEAUTOMLJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAutoMLJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateAutoMLJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateAutoMLJobResponse(const CreateAutoMLJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAutoMLJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoMLJobResponse)
    Q_DISABLE_COPY(CreateAutoMLJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
