// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTGROUPRESPONSE_H
#define QTAWS_DELETEPLACEMENTGROUPRESPONSE_H

#include "ec2response.h"
#include "deleteplacementgrouprequest.h"

namespace QtAws {
namespace Ec2 {

class DeletePlacementGroupResponsePrivate;

class QTAWSEC2_EXPORT DeletePlacementGroupResponse : public Ec2Response {
    Q_OBJECT

public:
    DeletePlacementGroupResponse(const DeletePlacementGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlacementGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlacementGroupResponse)
    Q_DISABLE_COPY(DeletePlacementGroupResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
