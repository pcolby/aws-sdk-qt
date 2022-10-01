// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_H
#define QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class RemoveDraftAppVersionResourceMappingsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT RemoveDraftAppVersionResourceMappingsRequest : public ResilienceHubRequest {

public:
    RemoveDraftAppVersionResourceMappingsRequest(const RemoveDraftAppVersionResourceMappingsRequest &other);
    RemoveDraftAppVersionResourceMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveDraftAppVersionResourceMappingsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
