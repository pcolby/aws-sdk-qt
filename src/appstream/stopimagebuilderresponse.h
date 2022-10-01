// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMAGEBUILDERRESPONSE_H
#define QTAWS_STOPIMAGEBUILDERRESPONSE_H

#include "appstreamresponse.h"
#include "stopimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class StopImageBuilderResponsePrivate;

class QTAWSAPPSTREAM_EXPORT StopImageBuilderResponse : public AppStreamResponse {
    Q_OBJECT

public:
    StopImageBuilderResponse(const StopImageBuilderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopImageBuilderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopImageBuilderResponse)
    Q_DISABLE_COPY(StopImageBuilderResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
