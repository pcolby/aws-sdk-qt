// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFRASTRUCTURECONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTINFRASTRUCTURECONFIGURATIONSRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListInfrastructureConfigurationsResponse;

class ListInfrastructureConfigurationsResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListInfrastructureConfigurationsResponsePrivate(ListInfrastructureConfigurationsResponse * const q);

    void parseListInfrastructureConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInfrastructureConfigurationsResponse)
    Q_DISABLE_COPY(ListInfrastructureConfigurationsResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
