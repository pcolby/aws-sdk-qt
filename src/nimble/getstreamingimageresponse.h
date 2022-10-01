// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGIMAGERESPONSE_H
#define QTAWS_GETSTREAMINGIMAGERESPONSE_H

#include "nimbleresponse.h"
#include "getstreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingImageResponsePrivate;

class QTAWSNIMBLE_EXPORT GetStreamingImageResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetStreamingImageResponse(const GetStreamingImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamingImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingImageResponse)
    Q_DISABLE_COPY(GetStreamingImageResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
