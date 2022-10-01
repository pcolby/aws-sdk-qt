// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENODERESPONSE_H
#define QTAWS_ASSOCIATENODERESPONSE_H

#include "opsworkscmresponse.h"
#include "associatenoderequest.h"

namespace QtAws {
namespace OpsWorksCm {

class AssociateNodeResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT AssociateNodeResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    AssociateNodeResponse(const AssociateNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateNodeResponse)
    Q_DISABLE_COPY(AssociateNodeResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
