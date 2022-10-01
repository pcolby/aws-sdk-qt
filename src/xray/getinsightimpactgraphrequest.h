// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTIMPACTGRAPHREQUEST_H
#define QTAWS_GETINSIGHTIMPACTGRAPHREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightImpactGraphRequestPrivate;

class QTAWSXRAY_EXPORT GetInsightImpactGraphRequest : public XRayRequest {

public:
    GetInsightImpactGraphRequest(const GetInsightImpactGraphRequest &other);
    GetInsightImpactGraphRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightImpactGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
