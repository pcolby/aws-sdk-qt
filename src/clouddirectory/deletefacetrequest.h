// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACETREQUEST_H
#define QTAWS_DELETEFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteFacetRequest : public CloudDirectoryRequest {

public:
    DeleteFacetRequest(const DeleteFacetRequest &other);
    DeleteFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
