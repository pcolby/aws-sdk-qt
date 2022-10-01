// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINENDPOINTSREQUEST_H
#define QTAWS_LISTORIGINENDPOINTSREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class ListOriginEndpointsRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT ListOriginEndpointsRequest : public MediaPackageRequest {

public:
    ListOriginEndpointsRequest(const ListOriginEndpointsRequest &other);
    ListOriginEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginEndpointsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
