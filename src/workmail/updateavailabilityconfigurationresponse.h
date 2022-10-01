// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEAVAILABILITYCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "updateavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateAvailabilityConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT UpdateAvailabilityConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    UpdateAvailabilityConfigurationResponse(const UpdateAvailabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAvailabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(UpdateAvailabilityConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
