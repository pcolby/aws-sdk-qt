// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEDEPLOYMENTPLANSRESPONSE_H
#define QTAWS_LISTEDGEDEPLOYMENTPLANSRESPONSE_H

#include "sagemakerresponse.h"
#include "listedgedeploymentplansrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEdgeDeploymentPlansResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListEdgeDeploymentPlansResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListEdgeDeploymentPlansResponse(const ListEdgeDeploymentPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEdgeDeploymentPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEdgeDeploymentPlansResponse)
    Q_DISABLE_COPY(ListEdgeDeploymentPlansResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
