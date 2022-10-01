// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEAPPVERSIONRESOURCESREQUEST_H
#define QTAWS_RESOLVEAPPVERSIONRESOURCESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ResolveAppVersionResourcesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ResolveAppVersionResourcesRequest : public ResilienceHubRequest {

public:
    ResolveAppVersionResourcesRequest(const ResolveAppVersionResourcesRequest &other);
    ResolveAppVersionResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveAppVersionResourcesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
