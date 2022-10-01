// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPERMISSIONSRESPONSE_H
#define QTAWS_DELETEIMAGEPERMISSIONSRESPONSE_H

#include "appstreamresponse.h"
#include "deleteimagepermissionsrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImagePermissionsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteImagePermissionsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteImagePermissionsResponse(const DeleteImagePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImagePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImagePermissionsResponse)
    Q_DISABLE_COPY(DeleteImagePermissionsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
