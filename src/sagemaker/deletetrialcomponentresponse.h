// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALCOMPONENTRESPONSE_H
#define QTAWS_DELETETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "deletetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteTrialComponentResponse(const DeleteTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrialComponentResponse)
    Q_DISABLE_COPY(DeleteTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
