// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTALRESPONSE_H
#define QTAWS_UPDATEPORTALRESPONSE_H

#include "workspaceswebresponse.h"
#include "updateportalrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdatePortalResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdatePortalResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    UpdatePortalResponse(const UpdatePortalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePortalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortalResponse)
    Q_DISABLE_COPY(UpdatePortalResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
