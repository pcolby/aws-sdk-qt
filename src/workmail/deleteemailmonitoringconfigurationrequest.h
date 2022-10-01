// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILMONITORINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEEMAILMONITORINGCONFIGURATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteEmailMonitoringConfigurationRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteEmailMonitoringConfigurationRequest : public WorkMailRequest {

public:
    DeleteEmailMonitoringConfigurationRequest(const DeleteEmailMonitoringConfigurationRequest &other);
    DeleteEmailMonitoringConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailMonitoringConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
