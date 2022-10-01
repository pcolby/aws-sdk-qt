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

#ifndef QTAWS_M2RESPONSE_H
#define QTAWS_M2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsm2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace M2 {

class M2ResponsePrivate;

class QTAWSM2_EXPORT M2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    M2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    M2Response(M2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(M2Response)
    Q_DISABLE_COPY(M2Response)

};

} // namespace M2
} // namespace QtAws

#endif
