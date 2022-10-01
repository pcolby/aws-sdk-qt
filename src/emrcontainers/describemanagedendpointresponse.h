// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDENDPOINTRESPONSE_H
#define QTAWS_DESCRIBEMANAGEDENDPOINTRESPONSE_H

#include "emrcontainersresponse.h"
#include "describemanagedendpointrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeManagedEndpointResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT DescribeManagedEndpointResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    DescribeManagedEndpointResponse(const DescribeManagedEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeManagedEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeManagedEndpointResponse)
    Q_DISABLE_COPY(DescribeManagedEndpointResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
