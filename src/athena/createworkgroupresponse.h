// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPRESPONSE_H
#define QTAWS_CREATEWORKGROUPRESPONSE_H

#include "athenaresponse.h"
#include "createworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class CreateWorkGroupResponsePrivate;

class QTAWSATHENA_EXPORT CreateWorkGroupResponse : public AthenaResponse {
    Q_OBJECT

public:
    CreateWorkGroupResponse(const CreateWorkGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkGroupResponse)
    Q_DISABLE_COPY(CreateWorkGroupResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
