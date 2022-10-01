// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALCLUSTERSRESPONSE_H
#define QTAWS_LISTVIRTUALCLUSTERSRESPONSE_H

#include "emrcontainersresponse.h"
#include "listvirtualclustersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListVirtualClustersResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT ListVirtualClustersResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    ListVirtualClustersResponse(const ListVirtualClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualClustersResponse)
    Q_DISABLE_COPY(ListVirtualClustersResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
