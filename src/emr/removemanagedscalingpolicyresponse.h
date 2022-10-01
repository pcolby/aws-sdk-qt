// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEMANAGEDSCALINGPOLICYRESPONSE_H
#define QTAWS_REMOVEMANAGEDSCALINGPOLICYRESPONSE_H

#include "emrresponse.h"
#include "removemanagedscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class RemoveManagedScalingPolicyResponsePrivate;

class QTAWSEMR_EXPORT RemoveManagedScalingPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    RemoveManagedScalingPolicyResponse(const RemoveManagedScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveManagedScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveManagedScalingPolicyResponse)
    Q_DISABLE_COPY(RemoveManagedScalingPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
