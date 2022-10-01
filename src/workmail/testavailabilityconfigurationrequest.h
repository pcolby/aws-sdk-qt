// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAVAILABILITYCONFIGURATIONREQUEST_H
#define QTAWS_TESTAVAILABILITYCONFIGURATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class TestAvailabilityConfigurationRequestPrivate;

class QTAWSWORKMAIL_EXPORT TestAvailabilityConfigurationRequest : public WorkMailRequest {

public:
    TestAvailabilityConfigurationRequest(const TestAvailabilityConfigurationRequest &other);
    TestAvailabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
