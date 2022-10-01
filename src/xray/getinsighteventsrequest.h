// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTEVENTSREQUEST_H
#define QTAWS_GETINSIGHTEVENTSREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightEventsRequestPrivate;

class QTAWSXRAY_EXPORT GetInsightEventsRequest : public XRayRequest {

public:
    GetInsightEventsRequest(const GetInsightEventsRequest &other);
    GetInsightEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightEventsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
