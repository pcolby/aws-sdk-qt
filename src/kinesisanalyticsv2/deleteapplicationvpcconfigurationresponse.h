// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "deleteapplicationvpcconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationVpcConfigurationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationVpcConfigurationResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    DeleteApplicationVpcConfigurationResponse(const DeleteApplicationVpcConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationVpcConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationVpcConfigurationResponse)
    Q_DISABLE_COPY(DeleteApplicationVpcConfigurationResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
