// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTSRESPONSE_H
#define QTAWS_LISTTESTSRESPONSE_H

#include "devicefarmresponse.h"
#include "listtestsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListTestsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListTestsResponse(const ListTestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestsResponse)
    Q_DISABLE_COPY(ListTestsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
