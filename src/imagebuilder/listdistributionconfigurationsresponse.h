// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONCONFIGURATIONSRESPONSE_H

#include "imagebuilderresponse.h"
#include "listdistributionconfigurationsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListDistributionConfigurationsResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListDistributionConfigurationsResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListDistributionConfigurationsResponse(const ListDistributionConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionConfigurationsResponse)
    Q_DISABLE_COPY(ListDistributionConfigurationsResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
