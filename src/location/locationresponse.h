// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOCATIONRESPONSE_H
#define QTAWS_LOCATIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslocationglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Location {

class LocationResponsePrivate;

class QTAWSLOCATION_EXPORT LocationResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LocationResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LocationResponse(LocationResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LocationResponse)
    Q_DISABLE_COPY(LocationResponse)

};

} // namespace Location
} // namespace QtAws

#endif
