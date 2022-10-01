// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYCONFIGRESPONSE_H
#define QTAWS_DELETEDIRECTORYCONFIGRESPONSE_H

#include "appstreamresponse.h"
#include "deletedirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteDirectoryConfigResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteDirectoryConfigResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteDirectoryConfigResponse(const DeleteDirectoryConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDirectoryConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectoryConfigResponse)
    Q_DISABLE_COPY(DeleteDirectoryConfigResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
