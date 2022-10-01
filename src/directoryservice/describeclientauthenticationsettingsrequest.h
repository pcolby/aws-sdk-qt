// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSREQUEST_H
#define QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeClientAuthenticationSettingsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeClientAuthenticationSettingsRequest : public DirectoryServiceRequest {

public:
    DescribeClientAuthenticationSettingsRequest(const DescribeClientAuthenticationSettingsRequest &other);
    DescribeClientAuthenticationSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientAuthenticationSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
