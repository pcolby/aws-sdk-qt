// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETECLUSTERPARAMETERGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "deleteclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterParameterGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterParameterGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteClusterParameterGroupResponse(const DeleteClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterParameterGroupResponse)
    Q_DISABLE_COPY(DeleteClusterParameterGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
