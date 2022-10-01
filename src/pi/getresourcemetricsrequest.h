// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETRICSREQUEST_H
#define QTAWS_GETRESOURCEMETRICSREQUEST_H

#include "pirequest.h"

namespace QtAws {
namespace Pi {

class GetResourceMetricsRequestPrivate;

class QTAWSPI_EXPORT GetResourceMetricsRequest : public PiRequest {

public:
    GetResourceMetricsRequest(const GetResourceMetricsRequest &other);
    GetResourceMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceMetricsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
