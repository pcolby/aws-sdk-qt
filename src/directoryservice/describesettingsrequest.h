// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESETTINGSREQUEST_H
#define QTAWS_DESCRIBESETTINGSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSettingsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeSettingsRequest : public DirectoryServiceRequest {

public:
    DescribeSettingsRequest(const DescribeSettingsRequest &other);
    DescribeSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
