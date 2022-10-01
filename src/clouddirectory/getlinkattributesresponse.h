// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKATTRIBUTESRESPONSE_H
#define QTAWS_GETLINKATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "getlinkattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetLinkAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetLinkAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    GetLinkAttributesResponse(const GetLinkAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLinkAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLinkAttributesResponse)
    Q_DISABLE_COPY(GetLinkAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
