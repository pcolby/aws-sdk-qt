// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPEDLINKFACETINFORMATIONRESPONSE_H
#define QTAWS_GETTYPEDLINKFACETINFORMATIONRESPONSE_H

#include "clouddirectoryresponse.h"
#include "gettypedlinkfacetinformationrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetTypedLinkFacetInformationResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetTypedLinkFacetInformationResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetTypedLinkFacetInformationResponse(const GetTypedLinkFacetInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTypedLinkFacetInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTypedLinkFacetInformationResponse)
    Q_DISABLE_COPY(GetTypedLinkFacetInformationResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
