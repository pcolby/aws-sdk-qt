// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPEDLINKFACETRESPONSE_H
#define QTAWS_DELETETYPEDLINKFACETRESPONSE_H

#include "clouddirectoryresponse.h"
#include "deletetypedlinkfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteTypedLinkFacetResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteTypedLinkFacetResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DeleteTypedLinkFacetResponse(const DeleteTypedLinkFacetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTypedLinkFacetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTypedLinkFacetResponse)
    Q_DISABLE_COPY(DeleteTypedLinkFacetResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
