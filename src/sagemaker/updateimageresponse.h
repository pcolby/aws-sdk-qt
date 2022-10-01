// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGERESPONSE_H
#define QTAWS_UPDATEIMAGERESPONSE_H

#include "sagemakerresponse.h"
#include "updateimagerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateImageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateImageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateImageResponse(const UpdateImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImageResponse)
    Q_DISABLE_COPY(UpdateImageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
