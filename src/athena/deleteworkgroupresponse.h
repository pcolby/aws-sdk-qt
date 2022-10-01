// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPRESPONSE_H
#define QTAWS_DELETEWORKGROUPRESPONSE_H

#include "athenaresponse.h"
#include "deleteworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class DeleteWorkGroupResponsePrivate;

class QTAWSATHENA_EXPORT DeleteWorkGroupResponse : public AthenaResponse {
    Q_OBJECT

public:
    DeleteWorkGroupResponse(const DeleteWorkGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkGroupResponse)
    Q_DISABLE_COPY(DeleteWorkGroupResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
