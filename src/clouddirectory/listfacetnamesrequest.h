// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETNAMESREQUEST_H
#define QTAWS_LISTFACETNAMESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetNamesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListFacetNamesRequest : public CloudDirectoryRequest {

public:
    ListFacetNamesRequest(const ListFacetNamesRequest &other);
    ListFacetNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFacetNamesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
