// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPRESPONSE_H
#define QTAWS_DELETEMODELPACKAGEGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "deletemodelpackagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelPackageGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteModelPackageGroupResponse(const DeleteModelPackageGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelPackageGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelPackageGroupResponse)
    Q_DISABLE_COPY(DeleteModelPackageGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
