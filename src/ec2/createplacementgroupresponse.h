// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTGROUPRESPONSE_H
#define QTAWS_CREATEPLACEMENTGROUPRESPONSE_H

#include "ec2response.h"
#include "createplacementgrouprequest.h"

namespace QtAws {
namespace Ec2 {

class CreatePlacementGroupResponsePrivate;

class QTAWSEC2_EXPORT CreatePlacementGroupResponse : public Ec2Response {
    Q_OBJECT

public:
    CreatePlacementGroupResponse(const CreatePlacementGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlacementGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlacementGroupResponse)
    Q_DISABLE_COPY(CreatePlacementGroupResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
