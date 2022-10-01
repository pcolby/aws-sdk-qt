// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFLEETRESPONSE_H
#define QTAWS_MODIFYFLEETRESPONSE_H

#include "ec2response.h"
#include "modifyfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyFleetResponsePrivate;

class QTAWSEC2_EXPORT ModifyFleetResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyFleetResponse(const ModifyFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyFleetResponse)
    Q_DISABLE_COPY(ModifyFleetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
