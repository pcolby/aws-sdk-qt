// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINRESPONSE_H
#define QTAWS_DELETEDOMAINRESPONSE_H

#include "sagemakerresponse.h"
#include "deletedomainrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDomainResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteDomainResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteDomainResponse(const DeleteDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainResponse)
    Q_DISABLE_COPY(DeleteDomainResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
