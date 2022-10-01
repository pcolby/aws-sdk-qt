// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESREQUEST_H
#define QTAWS_LISTPACKAGESREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListPackagesRequestPrivate;

class QTAWSPANORAMA_EXPORT ListPackagesRequest : public PanoramaRequest {

public:
    ListPackagesRequest(const ListPackagesRequest &other);
    ListPackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
