// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETEPARAMETERGROUPRESPONSE_H

#include "daxresponse.h"
#include "deleteparametergrouprequest.h"

namespace QtAws {
namespace Dax {

class DeleteParameterGroupResponsePrivate;

class QTAWSDAX_EXPORT DeleteParameterGroupResponse : public DaxResponse {
    Q_OBJECT

public:
    DeleteParameterGroupResponse(const DeleteParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParameterGroupResponse)
    Q_DISABLE_COPY(DeleteParameterGroupResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
