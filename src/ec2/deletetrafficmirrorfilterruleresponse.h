// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERRULERESPONSE_H
#define QTAWS_DELETETRAFFICMIRRORFILTERRULERESPONSE_H

#include "ec2response.h"
#include "deletetrafficmirrorfilterrulerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterRuleResponsePrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorFilterRuleResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTrafficMirrorFilterRuleResponse(const DeleteTrafficMirrorFilterRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrafficMirrorFilterRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorFilterRuleResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorFilterRuleResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
