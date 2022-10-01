// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONRESPONSE_H
#define QTAWS_GETCONNECTIONRESPONSE_H

#include "outpostsresponse.h"
#include "getconnectionrequest.h"

namespace QtAws {
namespace Outposts {

class GetConnectionResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetConnectionResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetConnectionResponse(const GetConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionResponse)
    Q_DISABLE_COPY(GetConnectionResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
