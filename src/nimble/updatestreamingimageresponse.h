// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGIMAGERESPONSE_H
#define QTAWS_UPDATESTREAMINGIMAGERESPONSE_H

#include "nimbleresponse.h"
#include "updatestreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStreamingImageResponsePrivate;

class QTAWSNIMBLE_EXPORT UpdateStreamingImageResponse : public NimbleResponse {
    Q_OBJECT

public:
    UpdateStreamingImageResponse(const UpdateStreamingImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStreamingImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamingImageResponse)
    Q_DISABLE_COPY(UpdateStreamingImageResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
