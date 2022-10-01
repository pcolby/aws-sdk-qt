// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOSIGNALINGRESPONSE_H
#define QTAWS_KINESISVIDEOSIGNALINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisvideosignalingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class KinesisVideoSignalingResponsePrivate;

class QTAWSKINESISVIDEOSIGNALING_EXPORT KinesisVideoSignalingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisVideoSignalingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisVideoSignalingResponse(KinesisVideoSignalingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoSignalingResponse)
    Q_DISABLE_COPY(KinesisVideoSignalingResponse)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
