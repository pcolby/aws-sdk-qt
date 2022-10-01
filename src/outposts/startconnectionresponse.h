// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONNECTIONRESPONSE_H
#define QTAWS_STARTCONNECTIONRESPONSE_H

#include "outpostsresponse.h"
#include "startconnectionrequest.h"

namespace QtAws {
namespace Outposts {

class StartConnectionResponsePrivate;

class QTAWSOUTPOSTS_EXPORT StartConnectionResponse : public OutpostsResponse {
    Q_OBJECT

public:
    StartConnectionResponse(const StartConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConnectionResponse)
    Q_DISABLE_COPY(StartConnectionResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
