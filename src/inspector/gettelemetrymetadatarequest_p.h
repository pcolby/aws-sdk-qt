// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTELEMETRYMETADATAREQUEST_P_H
#define QTAWS_GETTELEMETRYMETADATAREQUEST_P_H

#include "inspectorrequest_p.h"
#include "gettelemetrymetadatarequest.h"

namespace QtAws {
namespace Inspector {

class GetTelemetryMetadataRequest;

class GetTelemetryMetadataRequestPrivate : public InspectorRequestPrivate {

public:
    GetTelemetryMetadataRequestPrivate(const InspectorRequest::Action action,
                                   GetTelemetryMetadataRequest * const q);
    GetTelemetryMetadataRequestPrivate(const GetTelemetryMetadataRequestPrivate &other,
                                   GetTelemetryMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTelemetryMetadataRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
