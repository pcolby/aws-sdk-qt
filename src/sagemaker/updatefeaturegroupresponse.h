// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREGROUPRESPONSE_H
#define QTAWS_UPDATEFEATUREGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "updatefeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateFeatureGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateFeatureGroupResponse(const UpdateFeatureGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFeatureGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFeatureGroupResponse)
    Q_DISABLE_COPY(UpdateFeatureGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
