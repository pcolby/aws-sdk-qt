// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEADDRESSRESPONSE_H
#define QTAWS_UPDATESITEADDRESSRESPONSE_H

#include "outpostsresponse.h"
#include "updatesiteaddressrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteAddressResponsePrivate;

class QTAWSOUTPOSTS_EXPORT UpdateSiteAddressResponse : public OutpostsResponse {
    Q_OBJECT

public:
    UpdateSiteAddressResponse(const UpdateSiteAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSiteAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteAddressResponse)
    Q_DISABLE_COPY(UpdateSiteAddressResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
