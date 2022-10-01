// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWARMPOOLRESPONSE_H
#define QTAWS_DELETEWARMPOOLRESPONSE_H

#include "autoscalingresponse.h"
#include "deletewarmpoolrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteWarmPoolResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DeleteWarmPoolResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DeleteWarmPoolResponse(const DeleteWarmPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWarmPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWarmPoolResponse)
    Q_DISABLE_COPY(DeleteWarmPoolResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
