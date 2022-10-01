// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDCONTROLSRESPONSE_H
#define QTAWS_LISTENABLEDCONTROLSRESPONSE_H

#include "controltowerresponse.h"
#include "listenabledcontrolsrequest.h"

namespace QtAws {
namespace ControlTower {

class ListEnabledControlsResponsePrivate;

class QTAWSCONTROLTOWER_EXPORT ListEnabledControlsResponse : public ControlTowerResponse {
    Q_OBJECT

public:
    ListEnabledControlsResponse(const ListEnabledControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnabledControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnabledControlsResponse)
    Q_DISABLE_COPY(ListEnabledControlsResponse)

};

} // namespace ControlTower
} // namespace QtAws

#endif
