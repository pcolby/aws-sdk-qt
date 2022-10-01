// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWARMPOOLRESPONSE_H
#define QTAWS_PUTWARMPOOLRESPONSE_H

#include "autoscalingresponse.h"
#include "putwarmpoolrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutWarmPoolResponsePrivate;

class QTAWSAUTOSCALING_EXPORT PutWarmPoolResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    PutWarmPoolResponse(const PutWarmPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutWarmPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutWarmPoolResponse)
    Q_DISABLE_COPY(PutWarmPoolResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
