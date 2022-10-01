// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACETREQUEST_H
#define QTAWS_GETFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetFacetRequest : public CloudDirectoryRequest {

public:
    GetFacetRequest(const GetFacetRequest &other);
    GetFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
