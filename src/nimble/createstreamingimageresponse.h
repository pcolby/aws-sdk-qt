// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGIMAGERESPONSE_H
#define QTAWS_CREATESTREAMINGIMAGERESPONSE_H

#include "nimbleresponse.h"
#include "createstreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingImageResponsePrivate;

class QTAWSNIMBLE_EXPORT CreateStreamingImageResponse : public NimbleResponse {
    Q_OBJECT

public:
    CreateStreamingImageResponse(const CreateStreamingImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamingImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingImageResponse)
    Q_DISABLE_COPY(CreateStreamingImageResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
