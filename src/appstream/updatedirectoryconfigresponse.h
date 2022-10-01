// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTORYCONFIGRESPONSE_H
#define QTAWS_UPDATEDIRECTORYCONFIGRESPONSE_H

#include "appstreamresponse.h"
#include "updatedirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateDirectoryConfigResponsePrivate;

class QTAWSAPPSTREAM_EXPORT UpdateDirectoryConfigResponse : public AppStreamResponse {
    Q_OBJECT

public:
    UpdateDirectoryConfigResponse(const UpdateDirectoryConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDirectoryConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDirectoryConfigResponse)
    Q_DISABLE_COPY(UpdateDirectoryConfigResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
