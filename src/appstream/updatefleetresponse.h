// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETRESPONSE_H
#define QTAWS_UPDATEFLEETRESPONSE_H

#include "appstreamresponse.h"
#include "updatefleetrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateFleetResponsePrivate;

class QTAWSAPPSTREAM_EXPORT UpdateFleetResponse : public AppStreamResponse {
    Q_OBJECT

public:
    UpdateFleetResponse(const UpdateFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetResponse)
    Q_DISABLE_COPY(UpdateFleetResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
