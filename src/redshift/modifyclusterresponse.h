// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERRESPONSE_H
#define QTAWS_MODIFYCLUSTERRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclusterrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterResponse(const ModifyClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterResponse)
    Q_DISABLE_COPY(ModifyClusterResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
