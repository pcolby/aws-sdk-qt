// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGERESPONSE_H
#define QTAWS_COPYIMAGERESPONSE_H

#include "appstreamresponse.h"
#include "copyimagerequest.h"

namespace QtAws {
namespace AppStream {

class CopyImageResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CopyImageResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CopyImageResponse(const CopyImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyImageResponse)
    Q_DISABLE_COPY(CopyImageResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
