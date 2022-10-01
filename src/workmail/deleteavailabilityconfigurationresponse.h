// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAVAILABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAVAILABILITYCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "deleteavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteAvailabilityConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteAvailabilityConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteAvailabilityConfigurationResponse(const DeleteAvailabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAvailabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(DeleteAvailabilityConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
