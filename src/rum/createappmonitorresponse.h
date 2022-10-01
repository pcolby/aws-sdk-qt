// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPMONITORRESPONSE_H
#define QTAWS_CREATEAPPMONITORRESPONSE_H

#include "rumresponse.h"
#include "createappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class CreateAppMonitorResponsePrivate;

class QTAWSRUM_EXPORT CreateAppMonitorResponse : public RumResponse {
    Q_OBJECT

public:
    CreateAppMonitorResponse(const CreateAppMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppMonitorResponse)
    Q_DISABLE_COPY(CreateAppMonitorResponse)

};

} // namespace Rum
} // namespace QtAws

#endif
