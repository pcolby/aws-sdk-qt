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

#ifndef QTAWS_RDSDATASERVICEREQUEST_P_H
#define QTAWS_RDSDATASERVICEREQUEST_P_H

namespace QtAws {
namespace RDSDataService {

class RDSDataServiceRequest;

class RDSDataServiceRequestPrivate {

public:
    RDSDataServiceRequest::Action action; ///< RDSDataService action to be performed.
    QString apiVersion;        ///< RDSDataService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RDSDataService request (query string) parameters. @todo?

    RDSDataServiceRequestPrivate(const RDSDataServiceRequest::Action action, RDSDataServiceRequest * const q);
    RDSDataServiceRequestPrivate(const RDSDataServiceRequestPrivate &other, RDSDataServiceRequest * const q);

    static QString toString(const RDSDataServiceRequest::Action &action);

protected:
    RDSDataServiceRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(RDSDataServiceRequest)

};

} // namespace RDSDataService
} // namespace QtAws

#endif
