// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMANAGEDENDPOINTRESPONSE_H
#define QTAWS_CREATEMANAGEDENDPOINTRESPONSE_H

#include "emrcontainersresponse.h"
#include "createmanagedendpointrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CreateManagedEndpointResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT CreateManagedEndpointResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    CreateManagedEndpointResponse(const CreateManagedEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateManagedEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateManagedEndpointResponse)
    Q_DISABLE_COPY(CreateManagedEndpointResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
