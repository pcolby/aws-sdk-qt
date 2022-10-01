// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEDISTRIBUTIONCONFIGURATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "deletedistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteDistributionConfigurationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteDistributionConfigurationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    DeleteDistributionConfigurationResponse(const DeleteDistributionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDistributionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDistributionConfigurationResponse)
    Q_DISABLE_COPY(DeleteDistributionConfigurationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
