// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEBUILDERRESPONSE_H
#define QTAWS_DELETEIMAGEBUILDERRESPONSE_H

#include "appstreamresponse.h"
#include "deleteimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImageBuilderResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteImageBuilderResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteImageBuilderResponse(const DeleteImageBuilderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImageBuilderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageBuilderResponse)
    Q_DISABLE_COPY(DeleteImageBuilderResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
