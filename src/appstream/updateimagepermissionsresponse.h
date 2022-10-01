// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEIMAGEPERMISSIONSRESPONSE_H

#include "appstreamresponse.h"
#include "updateimagepermissionsrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateImagePermissionsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT UpdateImagePermissionsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    UpdateImagePermissionsResponse(const UpdateImagePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateImagePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImagePermissionsResponse)
    Q_DISABLE_COPY(UpdateImagePermissionsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
