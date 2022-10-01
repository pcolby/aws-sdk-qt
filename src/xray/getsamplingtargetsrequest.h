// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGTARGETSREQUEST_H
#define QTAWS_GETSAMPLINGTARGETSREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingTargetsRequestPrivate;

class QTAWSXRAY_EXPORT GetSamplingTargetsRequest : public XRayRequest {

public:
    GetSamplingTargetsRequest(const GetSamplingTargetsRequest &other);
    GetSamplingTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSamplingTargetsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
