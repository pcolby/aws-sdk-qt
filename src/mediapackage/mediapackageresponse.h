// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGERESPONSE_H
#define QTAWS_MEDIAPACKAGERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmediapackageglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaPackage {

class MediaPackageResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT MediaPackageResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaPackageResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaPackageResponse(MediaPackageResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaPackageResponse)
    Q_DISABLE_COPY(MediaPackageResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
