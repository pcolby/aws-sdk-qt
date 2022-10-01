// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRAFANARESPONSE_P_H
#define QTAWS_GRAFANARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Grafana {

class GrafanaResponse;

class GrafanaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GrafanaResponsePrivate(GrafanaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GrafanaResponse)
    Q_DISABLE_COPY(GrafanaResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
