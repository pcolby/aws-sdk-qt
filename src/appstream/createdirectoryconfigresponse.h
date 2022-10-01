// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYCONFIGRESPONSE_H
#define QTAWS_CREATEDIRECTORYCONFIGRESPONSE_H

#include "appstreamresponse.h"
#include "createdirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class CreateDirectoryConfigResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateDirectoryConfigResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateDirectoryConfigResponse(const CreateDirectoryConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDirectoryConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectoryConfigResponse)
    Q_DISABLE_COPY(CreateDirectoryConfigResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
