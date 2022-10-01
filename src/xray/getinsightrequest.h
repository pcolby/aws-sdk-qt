// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTREQUEST_H
#define QTAWS_GETINSIGHTREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightRequestPrivate;

class QTAWSXRAY_EXPORT GetInsightRequest : public XRayRequest {

public:
    GetInsightRequest(const GetInsightRequest &other);
    GetInsightRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
