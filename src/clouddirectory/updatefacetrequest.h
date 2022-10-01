// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFACETREQUEST_H
#define QTAWS_UPDATEFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateFacetRequest : public CloudDirectoryRequest {

public:
    UpdateFacetRequest(const UpdateFacetRequest &other);
    UpdateFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
