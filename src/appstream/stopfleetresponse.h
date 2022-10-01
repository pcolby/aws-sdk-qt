// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETRESPONSE_H
#define QTAWS_STOPFLEETRESPONSE_H

#include "appstreamresponse.h"
#include "stopfleetrequest.h"

namespace QtAws {
namespace AppStream {

class StopFleetResponsePrivate;

class QTAWSAPPSTREAM_EXPORT StopFleetResponse : public AppStreamResponse {
    Q_OBJECT

public:
    StopFleetResponse(const StopFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFleetResponse)
    Q_DISABLE_COPY(StopFleetResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
