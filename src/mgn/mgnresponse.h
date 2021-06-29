/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MGNRESPONSE_H
#define QTAWS_MGNRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmgnglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace mgn {

class mgnResponsePrivate;

class QTAWSMGN_EXPORT mgnResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    mgnResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    mgnResponsePrivate * const d_ptr; ///< Internal d-pointer.
    mgnResponse(mgnResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(mgnResponse)
    Q_DISABLE_COPY(mgnResponse)

};

} // namespace mgn
} // namespace QtAws

#endif
