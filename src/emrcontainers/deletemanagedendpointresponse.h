// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDENDPOINTRESPONSE_H
#define QTAWS_DELETEMANAGEDENDPOINTRESPONSE_H

#include "emrcontainersresponse.h"
#include "deletemanagedendpointrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DeleteManagedEndpointResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT DeleteManagedEndpointResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    DeleteManagedEndpointResponse(const DeleteManagedEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteManagedEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteManagedEndpointResponse)
    Q_DISABLE_COPY(DeleteManagedEndpointResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
