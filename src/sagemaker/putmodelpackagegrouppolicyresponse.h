// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMODELPACKAGEGROUPPOLICYRESPONSE_H
#define QTAWS_PUTMODELPACKAGEGROUPPOLICYRESPONSE_H

#include "sagemakerresponse.h"
#include "putmodelpackagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class PutModelPackageGroupPolicyResponsePrivate;

class QTAWSSAGEMAKER_EXPORT PutModelPackageGroupPolicyResponse : public SageMakerResponse {
    Q_OBJECT

public:
    PutModelPackageGroupPolicyResponse(const PutModelPackageGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutModelPackageGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutModelPackageGroupPolicyResponse)
    Q_DISABLE_COPY(PutModelPackageGroupPolicyResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
