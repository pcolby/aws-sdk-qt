// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONRESPONSE_H
#define QTAWS_DELETEACTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteactionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteActionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteActionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteActionResponse(const DeleteActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActionResponse)
    Q_DISABLE_COPY(DeleteActionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
