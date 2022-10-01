// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECORDINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATERECORDINGCONFIGURATIONRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class CreateRecordingConfigurationResponse;

class CreateRecordingConfigurationResponsePrivate : public IvsResponsePrivate {

public:

    explicit CreateRecordingConfigurationResponsePrivate(CreateRecordingConfigurationResponse * const q);

    void parseCreateRecordingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecordingConfigurationResponse)
    Q_DISABLE_COPY(CreateRecordingConfigurationResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
