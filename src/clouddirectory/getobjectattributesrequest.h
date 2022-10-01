// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESREQUEST_H
#define QTAWS_GETOBJECTATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetObjectAttributesRequest : public CloudDirectoryRequest {

public:
    GetObjectAttributesRequest(const GetObjectAttributesRequest &other);
    GetObjectAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
