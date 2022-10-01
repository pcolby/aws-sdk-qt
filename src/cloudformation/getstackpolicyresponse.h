// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTACKPOLICYRESPONSE_H
#define QTAWS_GETSTACKPOLICYRESPONSE_H

#include "cloudformationresponse.h"
#include "getstackpolicyrequest.h"

namespace QtAws {
namespace CloudFormation {

class GetStackPolicyResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT GetStackPolicyResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    GetStackPolicyResponse(const GetStackPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStackPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStackPolicyResponse)
    Q_DISABLE_COPY(GetStackPolicyResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
