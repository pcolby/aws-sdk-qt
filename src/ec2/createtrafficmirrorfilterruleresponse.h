// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERRULERESPONSE_H
#define QTAWS_CREATETRAFFICMIRRORFILTERRULERESPONSE_H

#include "ec2response.h"
#include "createtrafficmirrorfilterrulerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterRuleResponsePrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorFilterRuleResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTrafficMirrorFilterRuleResponse(const CreateTrafficMirrorFilterRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrafficMirrorFilterRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorFilterRuleResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorFilterRuleResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
