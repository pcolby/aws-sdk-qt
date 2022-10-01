// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFACETFROMOBJECTREQUEST_H
#define QTAWS_REMOVEFACETFROMOBJECTREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class RemoveFacetFromObjectRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT RemoveFacetFromObjectRequest : public CloudDirectoryRequest {

public:
    RemoveFacetFromObjectRequest(const RemoveFacetFromObjectRequest &other);
    RemoveFacetFromObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFacetFromObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
