// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCONFIGURATIONSREQUEST_H
#define QTAWS_EXPORTCONFIGURATIONSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ExportConfigurationsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ExportConfigurationsRequest : public ApplicationDiscoveryRequest {

public:
    ExportConfigurationsRequest(const ExportConfigurationsRequest &other);
    ExportConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
