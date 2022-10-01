// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WELLARCHITECTEDRESPONSE_H
#define QTAWS_WELLARCHITECTEDRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawswellarchitectedglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WellArchitected {

class WellArchitectedResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT WellArchitectedResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WellArchitectedResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WellArchitectedResponse(WellArchitectedResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WellArchitectedResponse)
    Q_DISABLE_COPY(WellArchitectedResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
