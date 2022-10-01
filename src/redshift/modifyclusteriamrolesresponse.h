// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERIAMROLESRESPONSE_H
#define QTAWS_MODIFYCLUSTERIAMROLESRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclusteriamrolesrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterIamRolesResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterIamRolesResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterIamRolesResponse(const ModifyClusterIamRolesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterIamRolesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterIamRolesResponse)
    Q_DISABLE_COPY(ModifyClusterIamRolesResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
