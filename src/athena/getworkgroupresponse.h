// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPRESPONSE_H
#define QTAWS_GETWORKGROUPRESPONSE_H

#include "athenaresponse.h"
#include "getworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class GetWorkGroupResponsePrivate;

class QTAWSATHENA_EXPORT GetWorkGroupResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetWorkGroupResponse(const GetWorkGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkGroupResponse)
    Q_DISABLE_COPY(GetWorkGroupResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
