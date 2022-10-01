// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETRESPONSE_H
#define QTAWS_STARTFLEETRESPONSE_H

#include "appstreamresponse.h"
#include "startfleetrequest.h"

namespace QtAws {
namespace AppStream {

class StartFleetResponsePrivate;

class QTAWSAPPSTREAM_EXPORT StartFleetResponse : public AppStreamResponse {
    Q_OBJECT

public:
    StartFleetResponse(const StartFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFleetResponse)
    Q_DISABLE_COPY(StartFleetResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
