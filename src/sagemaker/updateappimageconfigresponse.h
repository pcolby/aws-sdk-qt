// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPIMAGECONFIGRESPONSE_H
#define QTAWS_UPDATEAPPIMAGECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "updateappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateAppImageConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateAppImageConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateAppImageConfigResponse(const UpdateAppImageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAppImageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppImageConfigResponse)
    Q_DISABLE_COPY(UpdateAppImageConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
