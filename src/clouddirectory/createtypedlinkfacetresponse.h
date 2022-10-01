// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPEDLINKFACETRESPONSE_H
#define QTAWS_CREATETYPEDLINKFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "createtypedlinkfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateTypedLinkFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateTypedLinkFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    CreateTypedLinkFacetResponse(const CreateTypedLinkFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTypedLinkFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTypedLinkFacetResponse)
    Q_DISABLE_COPY(CreateTypedLinkFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
