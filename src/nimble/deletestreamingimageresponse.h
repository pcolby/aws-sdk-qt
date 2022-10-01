// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGIMAGERESPONSE_H
#define QTAWS_DELETESTREAMINGIMAGERESPONSE_H

#include "nimbleresponse.h"
#include "deletestreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingImageResponsePrivate;

class QTAWSNIMBLE_EXPORT DeleteStreamingImageResponse : public NimbleResponse {
    Q_OBJECT

public:
    DeleteStreamingImageResponse(const DeleteStreamingImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamingImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamingImageResponse)
    Q_DISABLE_COPY(DeleteStreamingImageResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
