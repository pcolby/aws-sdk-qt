// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERJOBSRESPONSE_H
#define QTAWS_LISTCLUSTERJOBSRESPONSE_H

#include "snowballresponse.h"
#include "listclusterjobsrequest.h"

namespace QtAws {
namespace Snowball {

class ListClusterJobsResponsePrivate;

class QTAWSSNOWBALL_EXPORT ListClusterJobsResponse : public SnowballResponse {
    Q_OBJECT

public:
    ListClusterJobsResponse(const ListClusterJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClusterJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClusterJobsResponse)
    Q_DISABLE_COPY(ListClusterJobsResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
