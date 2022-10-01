// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALRESPONSE_H
#define QTAWS_GETPORTALRESPONSE_H

#include "workspaceswebresponse.h"
#include "getportalrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetPortalResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetPortalResponse(const GetPortalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPortalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortalResponse)
    Q_DISABLE_COPY(GetPortalResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
