// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSREQUEST_H
#define QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourceMappingsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppVersionResourceMappingsRequest : public ResilienceHubRequest {

public:
    ListAppVersionResourceMappingsRequest(const ListAppVersionResourceMappingsRequest &other);
    ListAppVersionResourceMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppVersionResourceMappingsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
