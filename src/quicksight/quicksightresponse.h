// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUICKSIGHTRESPONSE_H
#define QTAWS_QUICKSIGHTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsquicksightglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace QuickSight {

class QuickSightResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT QuickSightResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    QuickSightResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    QuickSightResponse(QuickSightResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QuickSightResponse)
    Q_DISABLE_COPY(QuickSightResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
