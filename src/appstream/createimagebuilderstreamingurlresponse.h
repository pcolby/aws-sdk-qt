// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERSTREAMINGURLRESPONSE_H
#define QTAWS_CREATEIMAGEBUILDERSTREAMINGURLRESPONSE_H

#include "appstreamresponse.h"
#include "createimagebuilderstreamingurlrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderStreamingURLResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateImageBuilderStreamingURLResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateImageBuilderStreamingURLResponse(const CreateImageBuilderStreamingURLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageBuilderStreamingURLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageBuilderStreamingURLResponse)
    Q_DISABLE_COPY(CreateImageBuilderStreamingURLResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
