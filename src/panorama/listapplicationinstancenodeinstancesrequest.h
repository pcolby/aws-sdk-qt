// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESREQUEST_H
#define QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceNodeInstancesRequestPrivate;

class QTAWSPANORAMA_EXPORT ListApplicationInstanceNodeInstancesRequest : public PanoramaRequest {

public:
    ListApplicationInstanceNodeInstancesRequest(const ListApplicationInstanceNodeInstancesRequest &other);
    ListApplicationInstanceNodeInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationInstanceNodeInstancesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
