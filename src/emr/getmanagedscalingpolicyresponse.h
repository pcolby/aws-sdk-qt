// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDSCALINGPOLICYRESPONSE_H
#define QTAWS_GETMANAGEDSCALINGPOLICYRESPONSE_H

#include "emrresponse.h"
#include "getmanagedscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class GetManagedScalingPolicyResponsePrivate;

class QTAWSEMR_EXPORT GetManagedScalingPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    GetManagedScalingPolicyResponse(const GetManagedScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetManagedScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetManagedScalingPolicyResponse)
    Q_DISABLE_COPY(GetManagedScalingPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
