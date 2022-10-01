// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTEXTRESPONSE_H
#define QTAWS_UPDATECONTEXTRESPONSE_H

#include "sagemakerresponse.h"
#include "updatecontextrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateContextResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateContextResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateContextResponse(const UpdateContextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContextResponse)
    Q_DISABLE_COPY(UpdateContextResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
