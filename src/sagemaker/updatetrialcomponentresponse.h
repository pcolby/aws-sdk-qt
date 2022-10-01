// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALCOMPONENTRESPONSE_H
#define QTAWS_UPDATETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "updatetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateTrialComponentResponse(const UpdateTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrialComponentResponse)
    Q_DISABLE_COPY(UpdateTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
