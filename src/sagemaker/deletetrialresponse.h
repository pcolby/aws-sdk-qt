// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALRESPONSE_H
#define QTAWS_DELETETRIALRESPONSE_H

#include "sagemakerresponse.h"
#include "deletetrialrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteTrialResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteTrialResponse(const DeleteTrialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrialResponse)
    Q_DISABLE_COPY(DeleteTrialResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
