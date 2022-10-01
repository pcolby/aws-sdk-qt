// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETRECORDINGCONFIGURATIONRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class GetRecordingConfigurationResponse;

class GetRecordingConfigurationResponsePrivate : public IvsResponsePrivate {

public:

    explicit GetRecordingConfigurationResponsePrivate(GetRecordingConfigurationResponse * const q);

    void parseGetRecordingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecordingConfigurationResponse)
    Q_DISABLE_COPY(GetRecordingConfigurationResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
