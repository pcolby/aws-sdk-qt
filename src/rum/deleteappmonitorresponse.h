// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPMONITORRESPONSE_H
#define QTAWS_DELETEAPPMONITORRESPONSE_H

#include "rumresponse.h"
#include "deleteappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class DeleteAppMonitorResponsePrivate;

class QTAWSRUM_EXPORT DeleteAppMonitorResponse : public RumResponse {
    Q_OBJECT

public:
    DeleteAppMonitorResponse(const DeleteAppMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppMonitorResponse)
    Q_DISABLE_COPY(DeleteAppMonitorResponse)

};

} // namespace Rum
} // namespace QtAws

#endif
