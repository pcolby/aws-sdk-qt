// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTELEMETRYRECORDSREQUEST_H
#define QTAWS_PUTTELEMETRYRECORDSREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class PutTelemetryRecordsRequestPrivate;

class QTAWSXRAY_EXPORT PutTelemetryRecordsRequest : public XRayRequest {

public:
    PutTelemetryRecordsRequest(const PutTelemetryRecordsRequest &other);
    PutTelemetryRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutTelemetryRecordsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
