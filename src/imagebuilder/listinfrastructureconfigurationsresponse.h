// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFRASTRUCTURECONFIGURATIONSRESPONSE_H
#define QTAWS_LISTINFRASTRUCTURECONFIGURATIONSRESPONSE_H

#include "imagebuilderresponse.h"
#include "listinfrastructureconfigurationsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListInfrastructureConfigurationsResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListInfrastructureConfigurationsResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListInfrastructureConfigurationsResponse(const ListInfrastructureConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInfrastructureConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInfrastructureConfigurationsResponse)
    Q_DISABLE_COPY(ListInfrastructureConfigurationsResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
