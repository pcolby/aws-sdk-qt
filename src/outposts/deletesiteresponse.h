// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESITERESPONSE_H
#define QTAWS_DELETESITERESPONSE_H

#include "outpostsresponse.h"
#include "deletesiterequest.h"

namespace QtAws {
namespace Outposts {

class DeleteSiteResponsePrivate;

class QTAWSOUTPOSTS_EXPORT DeleteSiteResponse : public OutpostsResponse {
    Q_OBJECT

public:
    DeleteSiteResponse(const DeleteSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSiteResponse)
    Q_DISABLE_COPY(DeleteSiteResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
