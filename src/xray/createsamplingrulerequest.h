// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLINGRULEREQUEST_H
#define QTAWS_CREATESAMPLINGRULEREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class CreateSamplingRuleRequestPrivate;

class QTAWSXRAY_EXPORT CreateSamplingRuleRequest : public XRayRequest {

public:
    CreateSamplingRuleRequest(const CreateSamplingRuleRequest &other);
    CreateSamplingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSamplingRuleRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
