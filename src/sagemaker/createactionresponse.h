// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONRESPONSE_H
#define QTAWS_CREATEACTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "createactionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateActionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateActionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateActionResponse(const CreateActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActionResponse)
    Q_DISABLE_COPY(CreateActionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
