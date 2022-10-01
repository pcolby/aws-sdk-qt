// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPEDLINKFACETRESPONSE_H
#define QTAWS_UPDATETYPEDLINKFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "updatetypedlinkfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateTypedLinkFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateTypedLinkFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpdateTypedLinkFacetResponse(const UpdateTypedLinkFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTypedLinkFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTypedLinkFacetResponse)
    Q_DISABLE_COPY(UpdateTypedLinkFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
