// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGERESPONSE_H
#define QTAWS_DELETEIMAGERESPONSE_H

#include "appstreamresponse.h"
#include "deleteimagerequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImageResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteImageResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteImageResponse(const DeleteImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageResponse)
    Q_DISABLE_COPY(DeleteImageResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
