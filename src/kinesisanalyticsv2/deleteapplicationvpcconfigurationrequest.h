// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONREQUEST_H
#define QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationVpcConfigurationRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationVpcConfigurationRequest : public KinesisAnalyticsV2Request {

public:
    DeleteApplicationVpcConfigurationRequest(const DeleteApplicationVpcConfigurationRequest &other);
    DeleteApplicationVpcConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationVpcConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
