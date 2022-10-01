// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINEAGEGROUPPOLICYRESPONSE_H
#define QTAWS_GETLINEAGEGROUPPOLICYRESPONSE_H

#include "sagemakerresponse.h"
#include "getlineagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class GetLineageGroupPolicyResponsePrivate;

class QTAWSSAGEMAKER_EXPORT GetLineageGroupPolicyResponse : public SageMakerResponse {
    Q_OBJECT

public:
    GetLineageGroupPolicyResponse(const GetLineageGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLineageGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLineageGroupPolicyResponse)
    Q_DISABLE_COPY(GetLineageGroupPolicyResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
