// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMPLINGRULEREQUEST_H
#define QTAWS_UPDATESAMPLINGRULEREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class UpdateSamplingRuleRequestPrivate;

class QTAWSXRAY_EXPORT UpdateSamplingRuleRequest : public XRayRequest {

public:
    UpdateSamplingRuleRequest(const UpdateSamplingRuleRequest &other);
    UpdateSamplingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSamplingRuleRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
