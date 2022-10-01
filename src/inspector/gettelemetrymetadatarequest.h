// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTELEMETRYMETADATAREQUEST_H
#define QTAWS_GETTELEMETRYMETADATAREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class GetTelemetryMetadataRequestPrivate;

class QTAWSINSPECTOR_EXPORT GetTelemetryMetadataRequest : public InspectorRequest {

public:
    GetTelemetryMetadataRequest(const GetTelemetryMetadataRequest &other);
    GetTelemetryMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTelemetryMetadataRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
