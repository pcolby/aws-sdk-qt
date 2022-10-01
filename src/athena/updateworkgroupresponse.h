// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKGROUPRESPONSE_H
#define QTAWS_UPDATEWORKGROUPRESPONSE_H

#include "athenaresponse.h"
#include "updateworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class UpdateWorkGroupResponsePrivate;

class QTAWSATHENA_EXPORT UpdateWorkGroupResponse : public AthenaResponse {
    Q_OBJECT

public:
    UpdateWorkGroupResponse(const UpdateWorkGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkGroupResponse)
    Q_DISABLE_COPY(UpdateWorkGroupResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
