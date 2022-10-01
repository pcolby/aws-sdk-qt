// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTRECORDINGCONFIGURATIONSRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class ListRecordingConfigurationsResponse;

class ListRecordingConfigurationsResponsePrivate : public IvsResponsePrivate {

public:

    explicit ListRecordingConfigurationsResponsePrivate(ListRecordingConfigurationsResponse * const q);

    void parseListRecordingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecordingConfigurationsResponse)
    Q_DISABLE_COPY(ListRecordingConfigurationsResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
