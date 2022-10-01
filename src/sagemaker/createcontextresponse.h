// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTEXTRESPONSE_H
#define QTAWS_CREATECONTEXTRESPONSE_H

#include "sagemakerresponse.h"
#include "createcontextrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateContextResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateContextResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateContextResponse(const CreateContextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContextResponse)
    Q_DISABLE_COPY(CreateContextResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
