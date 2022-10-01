// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEBUILDERRESPONSE_H
#define QTAWS_STARTIMAGEBUILDERRESPONSE_H

#include "appstreamresponse.h"
#include "startimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class StartImageBuilderResponsePrivate;

class QTAWSAPPSTREAM_EXPORT StartImageBuilderResponse : public AppStreamResponse {
    Q_OBJECT

public:
    StartImageBuilderResponse(const StartImageBuilderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImageBuilderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImageBuilderResponse)
    Q_DISABLE_COPY(StartImageBuilderResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
