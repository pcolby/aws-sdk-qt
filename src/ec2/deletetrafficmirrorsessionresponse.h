// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORSESSIONRESPONSE_H
#define QTAWS_DELETETRAFFICMIRRORSESSIONRESPONSE_H

#include "ec2response.h"
#include "deletetrafficmirrorsessionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorSessionResponsePrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorSessionResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTrafficMirrorSessionResponse(const DeleteTrafficMirrorSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrafficMirrorSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorSessionResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorSessionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
