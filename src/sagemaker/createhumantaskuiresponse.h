// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHUMANTASKUIRESPONSE_H
#define QTAWS_CREATEHUMANTASKUIRESPONSE_H

#include "sagemakerresponse.h"
#include "createhumantaskuirequest.h"

namespace QtAws {
namespace SageMaker {

class CreateHumanTaskUiResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateHumanTaskUiResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateHumanTaskUiResponse(const CreateHumanTaskUiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHumanTaskUiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHumanTaskUiResponse)
    Q_DISABLE_COPY(CreateHumanTaskUiResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
