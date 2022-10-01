// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAVAILABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_TESTAVAILABILITYCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "testavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class TestAvailabilityConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT TestAvailabilityConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    TestAvailabilityConfigurationResponse(const TestAvailabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestAvailabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestAvailabilityConfigurationResponse)
    Q_DISABLE_COPY(TestAvailabilityConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
