// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERDBREVISIONRESPONSE_H
#define QTAWS_MODIFYCLUSTERDBREVISIONRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclusterdbrevisionrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterDbRevisionResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterDbRevisionResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterDbRevisionResponse(const ModifyClusterDbRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterDbRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterDbRevisionResponse)
    Q_DISABLE_COPY(ModifyClusterDbRevisionResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
