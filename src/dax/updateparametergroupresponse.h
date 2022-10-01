// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPRESPONSE_H
#define QTAWS_UPDATEPARAMETERGROUPRESPONSE_H

#include "daxresponse.h"
#include "updateparametergrouprequest.h"

namespace QtAws {
namespace Dax {

class UpdateParameterGroupResponsePrivate;

class QTAWSDAX_EXPORT UpdateParameterGroupResponse : public DaxResponse {
    Q_OBJECT

public:
    UpdateParameterGroupResponse(const UpdateParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateParameterGroupResponse)
    Q_DISABLE_COPY(UpdateParameterGroupResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
