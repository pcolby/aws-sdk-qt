// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCESREQUEST_H
#define QTAWS_LISTAPPVERSIONRESOURCESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourcesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppVersionResourcesRequest : public ResilienceHubRequest {

public:
    ListAppVersionResourcesRequest(const ListAppVersionResourcesRequest &other);
    ListAppVersionResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppVersionResourcesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
