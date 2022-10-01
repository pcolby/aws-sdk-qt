// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALSERVICEPROVIDERMETADATARESPONSE_H
#define QTAWS_GETPORTALSERVICEPROVIDERMETADATARESPONSE_H

#include "workspaceswebresponse.h"
#include "getportalserviceprovidermetadatarequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalServiceProviderMetadataResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetPortalServiceProviderMetadataResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetPortalServiceProviderMetadataResponse(const GetPortalServiceProviderMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPortalServiceProviderMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortalServiceProviderMetadataResponse)
    Q_DISABLE_COPY(GetPortalServiceProviderMetadataResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
