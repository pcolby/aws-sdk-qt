// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFORCERESPONSE_H
#define QTAWS_UPDATEWORKFORCERESPONSE_H

#include "sagemakerresponse.h"
#include "updateworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkforceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateWorkforceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateWorkforceResponse(const UpdateWorkforceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkforceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkforceResponse)
    Q_DISABLE_COPY(UpdateWorkforceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
