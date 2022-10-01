// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRUNSRESPONSE_H
#define QTAWS_LISTRUNSRESPONSE_H

#include "devicefarmresponse.h"
#include "listrunsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListRunsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListRunsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListRunsResponse(const ListRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRunsResponse)
    Q_DISABLE_COPY(ListRunsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
