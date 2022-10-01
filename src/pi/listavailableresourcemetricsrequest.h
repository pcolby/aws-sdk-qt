// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEMETRICSREQUEST_H
#define QTAWS_LISTAVAILABLERESOURCEMETRICSREQUEST_H

#include "pirequest.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceMetricsRequestPrivate;

class QTAWSPI_EXPORT ListAvailableResourceMetricsRequest : public PiRequest {

public:
    ListAvailableResourceMetricsRequest(const ListAvailableResourceMetricsRequest &other);
    ListAvailableResourceMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableResourceMetricsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
