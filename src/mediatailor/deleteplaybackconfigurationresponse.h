// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEPLAYBACKCONFIGURATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "deleteplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeletePlaybackConfigurationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeletePlaybackConfigurationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeletePlaybackConfigurationResponse(const DeletePlaybackConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlaybackConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlaybackConfigurationResponse)
    Q_DISABLE_COPY(DeletePlaybackConfigurationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
