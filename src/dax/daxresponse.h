/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_DAXRESPONSE_H
#define QTAWS_DAXRESPONSE_H

#include "core/awsabstractresponse.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DAX {

class DaxResponsePrivate;

class QTAWS_EXPORT DaxResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DaxResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DaxResponse(DaxResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DaxResponse)
    Q_DISABLE_COPY(DaxResponse)

};

} // namespace DAX
} // namespace QtAws

#endif
