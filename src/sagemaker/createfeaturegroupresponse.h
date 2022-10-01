// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATUREGROUPRESPONSE_H
#define QTAWS_CREATEFEATUREGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "createfeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class CreateFeatureGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateFeatureGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateFeatureGroupResponse(const CreateFeatureGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFeatureGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFeatureGroupResponse)
    Q_DISABLE_COPY(CreateFeatureGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
