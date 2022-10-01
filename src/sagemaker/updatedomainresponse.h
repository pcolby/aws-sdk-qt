// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINRESPONSE_H
#define QTAWS_UPDATEDOMAINRESPONSE_H

#include "sagemakerresponse.h"
#include "updatedomainrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDomainResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateDomainResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateDomainResponse(const UpdateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainResponse)
    Q_DISABLE_COPY(UpdateDomainResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
