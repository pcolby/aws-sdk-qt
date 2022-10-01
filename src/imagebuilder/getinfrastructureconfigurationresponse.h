// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINFRASTRUCTURECONFIGURATIONRESPONSE_H
#define QTAWS_GETINFRASTRUCTURECONFIGURATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "getinfrastructureconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetInfrastructureConfigurationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetInfrastructureConfigurationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetInfrastructureConfigurationResponse(const GetInfrastructureConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInfrastructureConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInfrastructureConfigurationResponse)
    Q_DISABLE_COPY(GetInfrastructureConfigurationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
