// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETRECORDINGCONFIGURATIONRESPONSE_H

#include "ivsresponse.h"
#include "getrecordingconfigurationrequest.h"

namespace QtAws {
namespace Ivs {

class GetRecordingConfigurationResponsePrivate;

class QTAWSIVS_EXPORT GetRecordingConfigurationResponse : public IvsResponse {
    Q_OBJECT

public:
    GetRecordingConfigurationResponse(const GetRecordingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecordingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecordingConfigurationResponse)
    Q_DISABLE_COPY(GetRecordingConfigurationResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
