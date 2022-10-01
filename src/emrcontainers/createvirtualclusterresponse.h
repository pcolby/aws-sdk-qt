// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALCLUSTERRESPONSE_H
#define QTAWS_CREATEVIRTUALCLUSTERRESPONSE_H

#include "emrcontainersresponse.h"
#include "createvirtualclusterrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CreateVirtualClusterResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT CreateVirtualClusterResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    CreateVirtualClusterResponse(const CreateVirtualClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVirtualClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualClusterResponse)
    Q_DISABLE_COPY(CreateVirtualClusterResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
