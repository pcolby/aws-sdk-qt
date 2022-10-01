// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPBLOCKRESPONSE_H
#define QTAWS_CREATEAPPBLOCKRESPONSE_H

#include "appstreamresponse.h"
#include "createappblockrequest.h"

namespace QtAws {
namespace AppStream {

class CreateAppBlockResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateAppBlockResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateAppBlockResponse(const CreateAppBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppBlockResponse)
    Q_DISABLE_COPY(CreateAppBlockResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
