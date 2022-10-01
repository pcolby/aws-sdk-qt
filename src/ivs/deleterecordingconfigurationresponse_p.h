// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETERECORDINGCONFIGURATIONRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class DeleteRecordingConfigurationResponse;

class DeleteRecordingConfigurationResponsePrivate : public IvsResponsePrivate {

public:

    explicit DeleteRecordingConfigurationResponsePrivate(DeleteRecordingConfigurationResponse * const q);

    void parseDeleteRecordingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecordingConfigurationResponse)
    Q_DISABLE_COPY(DeleteRecordingConfigurationResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
