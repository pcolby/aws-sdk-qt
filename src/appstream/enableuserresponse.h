// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEUSERRESPONSE_H
#define QTAWS_ENABLEUSERRESPONSE_H

#include "appstreamresponse.h"
#include "enableuserrequest.h"

namespace QtAws {
namespace AppStream {

class EnableUserResponsePrivate;

class QTAWSAPPSTREAM_EXPORT EnableUserResponse : public AppStreamResponse {
    Q_OBJECT

public:
    EnableUserResponse(const EnableUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableUserResponse)
    Q_DISABLE_COPY(EnableUserResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
