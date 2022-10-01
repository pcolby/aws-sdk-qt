// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_CREATECLUSTERPARAMETERGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "createclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterParameterGroupResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterParameterGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateClusterParameterGroupResponse(const CreateClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterParameterGroupResponse)
    Q_DISABLE_COPY(CreateClusterParameterGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
