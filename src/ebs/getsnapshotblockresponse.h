// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTBLOCKRESPONSE_H
#define QTAWS_GETSNAPSHOTBLOCKRESPONSE_H

#include "ebsresponse.h"
#include "getsnapshotblockrequest.h"

namespace QtAws {
namespace Ebs {

class GetSnapshotBlockResponsePrivate;

class QTAWSEBS_EXPORT GetSnapshotBlockResponse : public EbsResponse {
    Q_OBJECT

public:
    GetSnapshotBlockResponse(const GetSnapshotBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSnapshotBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotBlockResponse)
    Q_DISABLE_COPY(GetSnapshotBlockResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
