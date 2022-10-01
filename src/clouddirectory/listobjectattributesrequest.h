// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTATTRIBUTESREQUEST_H
#define QTAWS_LISTOBJECTATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectAttributesRequest : public CloudDirectoryRequest {

public:
    ListObjectAttributesRequest(const ListObjectAttributesRequest &other);
    ListObjectAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
