// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOBJECTATTRIBUTESREQUEST_H
#define QTAWS_UPDATEOBJECTATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateObjectAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateObjectAttributesRequest : public CloudDirectoryRequest {

public:
    UpdateObjectAttributesRequest(const UpdateObjectAttributesRequest &other);
    UpdateObjectAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
