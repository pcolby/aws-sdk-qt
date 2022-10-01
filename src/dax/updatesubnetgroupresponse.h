// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETGROUPRESPONSE_H
#define QTAWS_UPDATESUBNETGROUPRESPONSE_H

#include "daxresponse.h"
#include "updatesubnetgrouprequest.h"

namespace QtAws {
namespace Dax {

class UpdateSubnetGroupResponsePrivate;

class QTAWSDAX_EXPORT UpdateSubnetGroupResponse : public DaxResponse {
    Q_OBJECT

public:
    UpdateSubnetGroupResponse(const UpdateSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubnetGroupResponse)
    Q_DISABLE_COPY(UpdateSubnetGroupResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
