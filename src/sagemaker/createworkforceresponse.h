// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFORCERESPONSE_H
#define QTAWS_CREATEWORKFORCERESPONSE_H

#include "sagemakerresponse.h"
#include "createworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkforceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateWorkforceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateWorkforceResponse(const CreateWorkforceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkforceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkforceResponse)
    Q_DISABLE_COPY(CreateWorkforceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
