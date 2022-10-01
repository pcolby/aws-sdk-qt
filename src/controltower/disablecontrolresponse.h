// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECONTROLRESPONSE_H
#define QTAWS_DISABLECONTROLRESPONSE_H

#include "controltowerresponse.h"
#include "disablecontrolrequest.h"

namespace QtAws {
namespace ControlTower {

class DisableControlResponsePrivate;

class QTAWSCONTROLTOWER_EXPORT DisableControlResponse : public ControlTowerResponse {
    Q_OBJECT

public:
    DisableControlResponse(const DisableControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableControlResponse)
    Q_DISABLE_COPY(DisableControlResponse)

};

} // namespace ControlTower
} // namespace QtAws

#endif
