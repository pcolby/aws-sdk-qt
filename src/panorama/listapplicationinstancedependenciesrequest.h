// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESREQUEST_H
#define QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceDependenciesRequestPrivate;

class QTAWSPANORAMA_EXPORT ListApplicationInstanceDependenciesRequest : public PanoramaRequest {

public:
    ListApplicationInstanceDependenciesRequest(const ListApplicationInstanceDependenciesRequest &other);
    ListApplicationInstanceDependenciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationInstanceDependenciesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
