// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONVPCCONFIGURATIONRESPONSE_H
#define QTAWS_ADDAPPLICATIONVPCCONFIGURATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "addapplicationvpcconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationVpcConfigurationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT AddApplicationVpcConfigurationResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    AddApplicationVpcConfigurationResponse(const AddApplicationVpcConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationVpcConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationVpcConfigurationResponse)
    Q_DISABLE_COPY(AddApplicationVpcConfigurationResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
