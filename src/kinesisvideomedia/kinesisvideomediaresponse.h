// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOMEDIARESPONSE_H
#define QTAWS_KINESISVIDEOMEDIARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisvideomediaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KinesisVideoMedia {

class KinesisVideoMediaResponsePrivate;

class QTAWSKINESISVIDEOMEDIA_EXPORT KinesisVideoMediaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisVideoMediaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisVideoMediaResponse(KinesisVideoMediaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoMediaResponse)
    Q_DISABLE_COPY(KinesisVideoMediaResponse)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
