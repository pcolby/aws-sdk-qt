// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERRULERESPONSE_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERRULERESPONSE_H

#include "ec2response.h"
#include "modifytrafficmirrorfilterrulerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterRuleResponsePrivate;

class QTAWSEC2_EXPORT ModifyTrafficMirrorFilterRuleResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyTrafficMirrorFilterRuleResponse(const ModifyTrafficMirrorFilterRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTrafficMirrorFilterRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTrafficMirrorFilterRuleResponse)
    Q_DISABLE_COPY(ModifyTrafficMirrorFilterRuleResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
