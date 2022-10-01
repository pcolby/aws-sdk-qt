// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERESPONSE_H
#define QTAWS_UPDATESITERESPONSE_H

#include "outpostsresponse.h"
#include "updatesiterequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteResponsePrivate;

class QTAWSOUTPOSTS_EXPORT UpdateSiteResponse : public OutpostsResponse {
    Q_OBJECT

public:
    UpdateSiteResponse(const UpdateSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteResponse)
    Q_DISABLE_COPY(UpdateSiteResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
