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

#ifndef QTAWS_LOOKOUTFORVISIONREQUEST_P_H
#define QTAWS_LOOKOUTFORVISIONREQUEST_P_H

namespace QtAws {
namespace LookoutforVision {

class LookoutforVisionRequest;

class LookoutforVisionRequestPrivate {

public:
    LookoutforVisionRequest::Action action; ///< LookoutforVision action to be performed.
    QString apiVersion;        ///< LookoutforVision API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LookoutforVision request (query string) parameters. @todo?

    LookoutforVisionRequestPrivate(const LookoutforVisionRequest::Action action, LookoutforVisionRequest * const q);
    LookoutforVisionRequestPrivate(const LookoutforVisionRequestPrivate &other, LookoutforVisionRequest * const q);

    static QString toString(const LookoutforVisionRequest::Action &action);

protected:
    LookoutforVisionRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(LookoutforVisionRequest)

};

} // namespace LookoutforVision
} // namespace QtAws

#endif
