// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMPLINGRULEREQUEST_H
#define QTAWS_DELETESAMPLINGRULEREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class DeleteSamplingRuleRequestPrivate;

class QTAWSXRAY_EXPORT DeleteSamplingRuleRequest : public XRayRequest {

public:
    DeleteSamplingRuleRequest(const DeleteSamplingRuleRequest &other);
    DeleteSamplingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSamplingRuleRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
