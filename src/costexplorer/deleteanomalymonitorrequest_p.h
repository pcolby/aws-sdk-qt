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

#ifndef QTAWS_DELETEANOMALYMONITORREQUEST_P_H
#define QTAWS_DELETEANOMALYMONITORREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "deleteanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalyMonitorRequest;

class QTAWS_EXPORT DeleteAnomalyMonitorRequestPrivate : public CostExplorerRequestPrivate {

public:
    DeleteAnomalyMonitorRequestPrivate(const CostExplorerRequest::Action action,
                                   DeleteAnomalyMonitorRequest * const q);
    DeleteAnomalyMonitorRequestPrivate(const DeleteAnomalyMonitorRequestPrivate &other,
                                   DeleteAnomalyMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
