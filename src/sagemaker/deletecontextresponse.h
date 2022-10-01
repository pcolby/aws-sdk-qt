// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTEXTRESPONSE_H
#define QTAWS_DELETECONTEXTRESPONSE_H

#include "sagemakerresponse.h"
#include "deletecontextrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteContextResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteContextResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteContextResponse(const DeleteContextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContextResponse)
    Q_DISABLE_COPY(DeleteContextResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
