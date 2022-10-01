// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGURLRESPONSE_H
#define QTAWS_CREATESTREAMINGURLRESPONSE_H

#include "appstreamresponse.h"
#include "createstreamingurlrequest.h"

namespace QtAws {
namespace AppStream {

class CreateStreamingURLResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateStreamingURLResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateStreamingURLResponse(const CreateStreamingURLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamingURLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingURLResponse)
    Q_DISABLE_COPY(CreateStreamingURLResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
