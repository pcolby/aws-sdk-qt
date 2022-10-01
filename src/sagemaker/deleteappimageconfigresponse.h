// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPIMAGECONFIGRESPONSE_H
#define QTAWS_DELETEAPPIMAGECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAppImageConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteAppImageConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteAppImageConfigResponse(const DeleteAppImageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppImageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppImageConfigResponse)
    Q_DISABLE_COPY(DeleteAppImageConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
