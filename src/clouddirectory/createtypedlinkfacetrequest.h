// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPEDLINKFACETREQUEST_H
#define QTAWS_CREATETYPEDLINKFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateTypedLinkFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateTypedLinkFacetRequest : public CloudDirectoryRequest {

public:
    CreateTypedLinkFacetRequest(const CreateTypedLinkFacetRequest &other);
    CreateTypedLinkFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTypedLinkFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
