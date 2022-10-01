// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORTARGETRESPONSE_H
#define QTAWS_DELETETRAFFICMIRRORTARGETRESPONSE_H

#include "ec2response.h"
#include "deletetrafficmirrortargetrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorTargetResponsePrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorTargetResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTrafficMirrorTargetResponse(const DeleteTrafficMirrorTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrafficMirrorTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorTargetResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorTargetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
