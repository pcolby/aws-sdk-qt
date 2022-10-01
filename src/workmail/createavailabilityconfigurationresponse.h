// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAVAILABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEAVAILABILITYCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "createavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class CreateAvailabilityConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT CreateAvailabilityConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    CreateAvailabilityConfigurationResponse(const CreateAvailabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAvailabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(CreateAvailabilityConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
