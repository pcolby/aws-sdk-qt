// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPBLOCKRESPONSE_H
#define QTAWS_DELETEAPPBLOCKRESPONSE_H

#include "appstreamresponse.h"
#include "deleteappblockrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteAppBlockResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteAppBlockResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteAppBlockResponse(const DeleteAppBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppBlockResponse)
    Q_DISABLE_COPY(DeleteAppBlockResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
