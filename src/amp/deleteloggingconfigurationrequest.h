// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class DeleteLoggingConfigurationRequestPrivate;

class QTAWSAMP_EXPORT DeleteLoggingConfigurationRequest : public AmpRequest {

public:
    DeleteLoggingConfigurationRequest(const DeleteLoggingConfigurationRequest &other);
    DeleteLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoggingConfigurationRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
