// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PANORAMARESPONSE_H
#define QTAWS_PANORAMARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspanoramaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Panorama {

class PanoramaResponsePrivate;

class QTAWSPANORAMA_EXPORT PanoramaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PanoramaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PanoramaResponse(PanoramaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PanoramaResponse)
    Q_DISABLE_COPY(PanoramaResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
