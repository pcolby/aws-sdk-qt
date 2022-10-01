// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_CREATELOGGINGCONFIGURATIONREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class CreateLoggingConfigurationRequestPrivate;

class QTAWSAMP_EXPORT CreateLoggingConfigurationRequest : public AmpRequest {

public:
    CreateLoggingConfigurationRequest(const CreateLoggingConfigurationRequest &other);
    CreateLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoggingConfigurationRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
