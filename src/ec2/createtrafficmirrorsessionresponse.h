// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORSESSIONRESPONSE_H
#define QTAWS_CREATETRAFFICMIRRORSESSIONRESPONSE_H

#include "ec2response.h"
#include "createtrafficmirrorsessionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorSessionResponsePrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorSessionResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTrafficMirrorSessionResponse(const CreateTrafficMirrorSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrafficMirrorSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorSessionResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorSessionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
