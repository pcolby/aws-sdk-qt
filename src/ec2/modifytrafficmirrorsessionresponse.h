// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORSESSIONRESPONSE_H
#define QTAWS_MODIFYTRAFFICMIRRORSESSIONRESPONSE_H

#include "ec2response.h"
#include "modifytrafficmirrorsessionrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorSessionResponsePrivate;

class QTAWSEC2_EXPORT ModifyTrafficMirrorSessionResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyTrafficMirrorSessionResponse(const ModifyTrafficMirrorSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTrafficMirrorSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTrafficMirrorSessionResponse)
    Q_DISABLE_COPY(ModifyTrafficMirrorSessionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
