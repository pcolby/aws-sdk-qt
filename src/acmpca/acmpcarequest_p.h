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

#ifndef QTAWS_ACMPCAREQUEST_P_H
#define QTAWS_ACMPCAREQUEST_P_H

namespace QtAws {
namespace ACMPCA {

class AcmpcaRequest;

class AcmpcaRequestPrivate {

public:
    AcmpcaRequest::Action action; ///< ACMPCA action to be performed.
    QString apiVersion;        ///< ACMPCA API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ACMPCA request (query string) parameters. @todo?

    AcmpcaRequestPrivate(const AcmpcaRequest::Action action, AcmpcaRequest * const q);
    AcmpcaRequestPrivate(const AcmpcaRequestPrivate &other, AcmpcaRequest * const q);

    static QString toString(const AcmpcaRequest::Action &action);

protected:
    AcmpcaRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AcmpcaRequest)

};

} // namespace ACMPCA
} // namespace QtAws

#endif
