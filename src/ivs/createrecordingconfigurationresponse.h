// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECORDINGCONFIGURATIONRESPONSE_H
#define QTAWS_CREATERECORDINGCONFIGURATIONRESPONSE_H

#include "ivsresponse.h"
#include "createrecordingconfigurationrequest.h"

namespace QtAws {
namespace Ivs {

class CreateRecordingConfigurationResponsePrivate;

class QTAWSIVS_EXPORT CreateRecordingConfigurationResponse : public IvsResponse {
    Q_OBJECT

public:
    CreateRecordingConfigurationResponse(const CreateRecordingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecordingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecordingConfigurationResponse)
    Q_DISABLE_COPY(CreateRecordingConfigurationResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
