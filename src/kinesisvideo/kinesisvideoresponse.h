// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEORESPONSE_H
#define QTAWS_KINESISVIDEORESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisvideoglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT KinesisVideoResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisVideoResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisVideoResponse(KinesisVideoResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoResponse)
    Q_DISABLE_COPY(KinesisVideoResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
