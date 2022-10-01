// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGEDBLOCKSRESPONSE_H
#define QTAWS_LISTCHANGEDBLOCKSRESPONSE_H

#include "ebsresponse.h"
#include "listchangedblocksrequest.h"

namespace QtAws {
namespace Ebs {

class ListChangedBlocksResponsePrivate;

class QTAWSEBS_EXPORT ListChangedBlocksResponse : public EbsResponse {
    Q_OBJECT

public:
    ListChangedBlocksResponse(const ListChangedBlocksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChangedBlocksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangedBlocksResponse)
    Q_DISABLE_COPY(ListChangedBlocksResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
