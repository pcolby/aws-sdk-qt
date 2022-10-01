// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPEDLINKFACETREQUEST_H
#define QTAWS_UPDATETYPEDLINKFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateTypedLinkFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateTypedLinkFacetRequest : public CloudDirectoryRequest {

public:
    UpdateTypedLinkFacetRequest(const UpdateTypedLinkFacetRequest &other);
    UpdateTypedLinkFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTypedLinkFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
