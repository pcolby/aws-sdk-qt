// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLOPERATIONRESPONSE_H
#define QTAWS_GETCONTROLOPERATIONRESPONSE_H

#include "controltowerresponse.h"
#include "getcontroloperationrequest.h"

namespace QtAws {
namespace ControlTower {

class GetControlOperationResponsePrivate;

class QTAWSCONTROLTOWER_EXPORT GetControlOperationResponse : public ControlTowerResponse {
    Q_OBJECT

public:
    GetControlOperationResponse(const GetControlOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetControlOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetControlOperationResponse)
    Q_DISABLE_COPY(GetControlOperationResponse)

};

} // namespace ControlTower
} // namespace QtAws

#endif
