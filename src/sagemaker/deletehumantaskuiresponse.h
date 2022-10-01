// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANTASKUIRESPONSE_H
#define QTAWS_DELETEHUMANTASKUIRESPONSE_H

#include "sagemakerresponse.h"
#include "deletehumantaskuirequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteHumanTaskUiResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteHumanTaskUiResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteHumanTaskUiResponse(const DeleteHumanTaskUiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHumanTaskUiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHumanTaskUiResponse)
    Q_DISABLE_COPY(DeleteHumanTaskUiResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
