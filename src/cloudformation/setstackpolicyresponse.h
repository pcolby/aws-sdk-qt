// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTACKPOLICYRESPONSE_H
#define QTAWS_SETSTACKPOLICYRESPONSE_H

#include "cloudformationresponse.h"
#include "setstackpolicyrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetStackPolicyResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT SetStackPolicyResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    SetStackPolicyResponse(const SetStackPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetStackPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetStackPolicyResponse)
    Q_DISABLE_COPY(SetStackPolicyResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
