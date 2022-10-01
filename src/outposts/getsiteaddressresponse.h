// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITEADDRESSRESPONSE_H
#define QTAWS_GETSITEADDRESSRESPONSE_H

#include "outpostsresponse.h"
#include "getsiteaddressrequest.h"

namespace QtAws {
namespace Outposts {

class GetSiteAddressResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetSiteAddressResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetSiteAddressResponse(const GetSiteAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSiteAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSiteAddressResponse)
    Q_DISABLE_COPY(GetSiteAddressResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
