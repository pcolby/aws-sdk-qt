// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALCOMPONENTRESPONSE_H
#define QTAWS_CREATETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "createtrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateTrialComponentResponse(const CreateTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrialComponentResponse)
    Q_DISABLE_COPY(CreateTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
