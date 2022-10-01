// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEVERSIONRESPONSE_H
#define QTAWS_DELETEIMAGEVERSIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteimageversionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteImageVersionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteImageVersionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteImageVersionResponse(const DeleteImageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageVersionResponse)
    Q_DISABLE_COPY(DeleteImageVersionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
