// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONREQUEST_H
#define QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteHostedConfigurationVersionRequestPrivate;

class QTAWSAPPCONFIG_EXPORT DeleteHostedConfigurationVersionRequest : public AppConfigRequest {

public:
    DeleteHostedConfigurationVersionRequest(const DeleteHostedConfigurationVersionRequest &other);
    DeleteHostedConfigurationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostedConfigurationVersionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
