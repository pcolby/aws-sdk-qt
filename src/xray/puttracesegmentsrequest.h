// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTRACESEGMENTSREQUEST_H
#define QTAWS_PUTTRACESEGMENTSREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class PutTraceSegmentsRequestPrivate;

class QTAWSXRAY_EXPORT PutTraceSegmentsRequest : public XRayRequest {

public:
    PutTraceSegmentsRequest(const PutTraceSegmentsRequest &other);
    PutTraceSegmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutTraceSegmentsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
