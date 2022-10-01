// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_H
#define QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class AddDraftAppVersionResourceMappingsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT AddDraftAppVersionResourceMappingsRequest : public ResilienceHubRequest {

public:
    AddDraftAppVersionResourceMappingsRequest(const AddDraftAppVersionResourceMappingsRequest &other);
    AddDraftAppVersionResourceMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddDraftAppVersionResourceMappingsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
