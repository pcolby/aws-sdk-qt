// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELDAPSSETTINGSREQUEST_H
#define QTAWS_DESCRIBELDAPSSETTINGSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeLDAPSSettingsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeLDAPSSettingsRequest : public DirectoryServiceRequest {

public:
    DescribeLDAPSSettingsRequest(const DescribeLDAPSSettingsRequest &other);
    DescribeLDAPSSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLDAPSSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
