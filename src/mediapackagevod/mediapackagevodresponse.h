// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEVODRESPONSE_H
#define QTAWS_MEDIAPACKAGEVODRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmediapackagevodglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaPackageVod {

class MediaPackageVodResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT MediaPackageVodResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaPackageVodResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaPackageVodResponse(MediaPackageVodResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaPackageVodResponse)
    Q_DISABLE_COPY(MediaPackageVodResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
