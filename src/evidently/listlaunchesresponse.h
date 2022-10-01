// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHESRESPONSE_H
#define QTAWS_LISTLAUNCHESRESPONSE_H

#include "evidentlyresponse.h"
#include "listlaunchesrequest.h"

namespace QtAws {
namespace Evidently {

class ListLaunchesResponsePrivate;

class QTAWSEVIDENTLY_EXPORT ListLaunchesResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    ListLaunchesResponse(const ListLaunchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLaunchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchesResponse)
    Q_DISABLE_COPY(ListLaunchesResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
