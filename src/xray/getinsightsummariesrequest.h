// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSUMMARIESREQUEST_H
#define QTAWS_GETINSIGHTSUMMARIESREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightSummariesRequestPrivate;

class QTAWSXRAY_EXPORT GetInsightSummariesRequest : public XRayRequest {

public:
    GetInsightSummariesRequest(const GetInsightSummariesRequest &other);
    GetInsightSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightSummariesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
