// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPPOLICYRESPONSE_H
#define QTAWS_DELETEMODELPACKAGEGROUPPOLICYRESPONSE_H

#include "sagemakerresponse.h"
#include "deletemodelpackagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupPolicyResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelPackageGroupPolicyResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteModelPackageGroupPolicyResponse(const DeleteModelPackageGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelPackageGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelPackageGroupPolicyResponse)
    Q_DISABLE_COPY(DeleteModelPackageGroupPolicyResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
