// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEDISTRIBUTIONCONFIGURATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "createdistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateDistributionConfigurationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateDistributionConfigurationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CreateDistributionConfigurationResponse(const CreateDistributionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDistributionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDistributionConfigurationResponse)
    Q_DISABLE_COPY(CreateDistributionConfigurationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
