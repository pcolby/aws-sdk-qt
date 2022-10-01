// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDASSOCIATIONRESPONSE_H
#define QTAWS_ADDASSOCIATIONRESPONSE_H

#include "sagemakerresponse.h"
#include "addassociationrequest.h"

namespace QtAws {
namespace SageMaker {

class AddAssociationResponsePrivate;

class QTAWSSAGEMAKER_EXPORT AddAssociationResponse : public SageMakerResponse {
    Q_OBJECT

public:
    AddAssociationResponse(const AddAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddAssociationResponse)
    Q_DISABLE_COPY(AddAssociationResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
