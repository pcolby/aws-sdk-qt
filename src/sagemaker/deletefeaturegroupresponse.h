// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATUREGROUPRESPONSE_H
#define QTAWS_DELETEFEATUREGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "deletefeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteFeatureGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteFeatureGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteFeatureGroupResponse(const DeleteFeatureGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFeatureGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFeatureGroupResponse)
    Q_DISABLE_COPY(DeleteFeatureGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
