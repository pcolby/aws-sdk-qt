// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETERECORDINGCONFIGURATIONRESPONSE_H

#include "ivsresponse.h"
#include "deleterecordingconfigurationrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteRecordingConfigurationResponsePrivate;

class QTAWSIVS_EXPORT DeleteRecordingConfigurationResponse : public IvsResponse {
    Q_OBJECT

public:
    DeleteRecordingConfigurationResponse(const DeleteRecordingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecordingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecordingConfigurationResponse)
    Q_DISABLE_COPY(DeleteRecordingConfigurationResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
