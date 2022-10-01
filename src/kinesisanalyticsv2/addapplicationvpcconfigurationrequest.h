// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONVPCCONFIGURATIONREQUEST_H
#define QTAWS_ADDAPPLICATIONVPCCONFIGURATIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationVpcConfigurationRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT AddApplicationVpcConfigurationRequest : public KinesisAnalyticsV2Request {

public:
    AddApplicationVpcConfigurationRequest(const AddApplicationVpcConfigurationRequest &other);
    AddApplicationVpcConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationVpcConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
