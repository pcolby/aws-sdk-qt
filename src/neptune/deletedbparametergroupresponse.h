// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETEDBPARAMETERGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "deletedbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBParameterGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBParameterGroupResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DeleteDBParameterGroupResponse(const DeleteDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBParameterGroupResponse)
    Q_DISABLE_COPY(DeleteDBParameterGroupResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
