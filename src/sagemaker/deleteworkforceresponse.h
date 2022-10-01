// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFORCERESPONSE_H
#define QTAWS_DELETEWORKFORCERESPONSE_H

#include "sagemakerresponse.h"
#include "deleteworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkforceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteWorkforceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteWorkforceResponse(const DeleteWorkforceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkforceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkforceResponse)
    Q_DISABLE_COPY(DeleteWorkforceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
