// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFRASTRUCTURECONFIGURATIONRESPONSE_H
#define QTAWS_CREATEINFRASTRUCTURECONFIGURATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "createinfrastructureconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateInfrastructureConfigurationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateInfrastructureConfigurationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CreateInfrastructureConfigurationResponse(const CreateInfrastructureConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInfrastructureConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInfrastructureConfigurationResponse)
    Q_DISABLE_COPY(CreateInfrastructureConfigurationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
