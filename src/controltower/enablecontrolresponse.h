// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECONTROLRESPONSE_H
#define QTAWS_ENABLECONTROLRESPONSE_H

#include "controltowerresponse.h"
#include "enablecontrolrequest.h"

namespace QtAws {
namespace ControlTower {

class EnableControlResponsePrivate;

class QTAWSCONTROLTOWER_EXPORT EnableControlResponse : public ControlTowerResponse {
    Q_OBJECT

public:
    EnableControlResponse(const EnableControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableControlResponse)
    Q_DISABLE_COPY(EnableControlResponse)

};

} // namespace ControlTower
} // namespace QtAws

#endif
