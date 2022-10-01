// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERUNRESPONSE_H
#define QTAWS_DELETERUNRESPONSE_H

#include "devicefarmresponse.h"
#include "deleterunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRunResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeleteRunResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    DeleteRunResponse(const DeleteRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRunResponse)
    Q_DISABLE_COPY(DeleteRunResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
