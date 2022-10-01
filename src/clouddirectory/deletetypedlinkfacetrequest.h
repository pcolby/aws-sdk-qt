// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPEDLINKFACETREQUEST_H
#define QTAWS_DELETETYPEDLINKFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteTypedLinkFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteTypedLinkFacetRequest : public CloudDirectoryRequest {

public:
    DeleteTypedLinkFacetRequest(const DeleteTypedLinkFacetRequest &other);
    DeleteTypedLinkFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTypedLinkFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
