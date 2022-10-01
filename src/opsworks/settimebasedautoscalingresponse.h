// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTIMEBASEDAUTOSCALINGRESPONSE_H
#define QTAWS_SETTIMEBASEDAUTOSCALINGRESPONSE_H

#include "opsworksresponse.h"
#include "settimebasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetTimeBasedAutoScalingResponsePrivate;

class QTAWSOPSWORKS_EXPORT SetTimeBasedAutoScalingResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    SetTimeBasedAutoScalingResponse(const SetTimeBasedAutoScalingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTimeBasedAutoScalingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTimeBasedAutoScalingResponse)
    Q_DISABLE_COPY(SetTimeBasedAutoScalingResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
