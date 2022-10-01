// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETDISTRIBUTIONCONFIGURATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "getdistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetDistributionConfigurationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetDistributionConfigurationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetDistributionConfigurationResponse(const GetDistributionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionConfigurationResponse)
    Q_DISABLE_COPY(GetDistributionConfigurationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
