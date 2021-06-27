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

#ifndef QTAWS_IOTEVENTSDATAREQUEST_P_H
#define QTAWS_IOTEVENTSDATAREQUEST_P_H

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataRequest;

class IoTEventsDataRequestPrivate {

public:
    IoTEventsDataRequest::Action action; ///< IoTEventsData action to be performed.
    QString apiVersion;        ///< IoTEventsData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTEventsData request (query string) parameters. @todo?

    IoTEventsDataRequestPrivate(const IoTEventsDataRequest::Action action, IoTEventsDataRequest * const q);
    IoTEventsDataRequestPrivate(const IoTEventsDataRequestPrivate &other, IoTEventsDataRequest * const q);

    static QString toString(const IoTEventsDataRequest::Action &action);

protected:
    IoTEventsDataRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(IoTEventsDataRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
