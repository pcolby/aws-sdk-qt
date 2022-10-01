// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABILITYCONFIGURATIONSREQUEST_H
#define QTAWS_LISTAVAILABILITYCONFIGURATIONSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAvailabilityConfigurationsRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListAvailabilityConfigurationsRequest : public WorkMailRequest {

public:
    ListAvailabilityConfigurationsRequest(const ListAvailabilityConfigurationsRequest &other);
    ListAvailabilityConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailabilityConfigurationsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
