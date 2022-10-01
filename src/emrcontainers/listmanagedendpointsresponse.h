// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDENDPOINTSRESPONSE_H
#define QTAWS_LISTMANAGEDENDPOINTSRESPONSE_H

#include "emrcontainersresponse.h"
#include "listmanagedendpointsrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListManagedEndpointsResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT ListManagedEndpointsResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    ListManagedEndpointsResponse(const ListManagedEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedEndpointsResponse)
    Q_DISABLE_COPY(ListManagedEndpointsResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
