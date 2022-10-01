// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "updatedistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateDistributionConfigurationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT UpdateDistributionConfigurationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    UpdateDistributionConfigurationResponse(const UpdateDistributionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDistributionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionConfigurationResponse)
    Q_DISABLE_COPY(UpdateDistributionConfigurationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
