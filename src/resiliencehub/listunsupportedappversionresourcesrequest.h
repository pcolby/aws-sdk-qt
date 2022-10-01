// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNSUPPORTEDAPPVERSIONRESOURCESREQUEST_H
#define QTAWS_LISTUNSUPPORTEDAPPVERSIONRESOURCESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListUnsupportedAppVersionResourcesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListUnsupportedAppVersionResourcesRequest : public ResilienceHubRequest {

public:
    ListUnsupportedAppVersionResourcesRequest(const ListUnsupportedAppVersionResourcesRequest &other);
    ListUnsupportedAppVersionResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUnsupportedAppVersionResourcesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
