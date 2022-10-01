// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDSCALINGPOLICYRESPONSE_H
#define QTAWS_PUTMANAGEDSCALINGPOLICYRESPONSE_H

#include "emrresponse.h"
#include "putmanagedscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class PutManagedScalingPolicyResponsePrivate;

class QTAWSEMR_EXPORT PutManagedScalingPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    PutManagedScalingPolicyResponse(const PutManagedScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutManagedScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutManagedScalingPolicyResponse)
    Q_DISABLE_COPY(PutManagedScalingPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
