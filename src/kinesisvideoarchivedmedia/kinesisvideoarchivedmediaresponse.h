// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIARESPONSE_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisvideoarchivedmediaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT KinesisVideoArchivedMediaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisVideoArchivedMediaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisVideoArchivedMediaResponse(KinesisVideoArchivedMediaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoArchivedMediaResponse)
    Q_DISABLE_COPY(KinesisVideoArchivedMediaResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
