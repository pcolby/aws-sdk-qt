// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERESPONSE_H
#define QTAWS_CREATEIMAGERESPONSE_H

#include "sagemakerresponse.h"
#include "createimagerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateImageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateImageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateImageResponse(const CreateImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageResponse)
    Q_DISABLE_COPY(CreateImageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
