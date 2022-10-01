// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONRESPONSE_H
#define QTAWS_UPDATEACTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "updateactionrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateActionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateActionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateActionResponse(const UpdateActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateActionResponse)
    Q_DISABLE_COPY(UpdateActionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
