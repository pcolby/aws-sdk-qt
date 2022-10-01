// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITERESPONSE_H
#define QTAWS_GETSITERESPONSE_H

#include "outpostsresponse.h"
#include "getsiterequest.h"

namespace QtAws {
namespace Outposts {

class GetSiteResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetSiteResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetSiteResponse(const GetSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSiteResponse)
    Q_DISABLE_COPY(GetSiteResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
