// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALRESPONSE_H
#define QTAWS_CREATETRIALRESPONSE_H

#include "sagemakerresponse.h"
#include "createtrialrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrialResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateTrialResponse(const CreateTrialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrialResponse)
    Q_DISABLE_COPY(CreateTrialResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
