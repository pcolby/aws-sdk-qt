// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGSTATISTICSUMMARIESREQUEST_H
#define QTAWS_GETSAMPLINGSTATISTICSUMMARIESREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingStatisticSummariesRequestPrivate;

class QTAWSXRAY_EXPORT GetSamplingStatisticSummariesRequest : public XRayRequest {

public:
    GetSamplingStatisticSummariesRequest(const GetSamplingStatisticSummariesRequest &other);
    GetSamplingStatisticSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSamplingStatisticSummariesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
