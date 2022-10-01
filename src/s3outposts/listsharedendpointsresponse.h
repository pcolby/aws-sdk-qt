// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDENDPOINTSRESPONSE_H
#define QTAWS_LISTSHAREDENDPOINTSRESPONSE_H

#include "s3outpostsresponse.h"
#include "listsharedendpointsrequest.h"

namespace QtAws {
namespace S3Outposts {

class ListSharedEndpointsResponsePrivate;

class QTAWSS3OUTPOSTS_EXPORT ListSharedEndpointsResponse : public S3OutpostsResponse {
    Q_OBJECT

public:
    ListSharedEndpointsResponse(const ListSharedEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSharedEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSharedEndpointsResponse)
    Q_DISABLE_COPY(ListSharedEndpointsResponse)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
