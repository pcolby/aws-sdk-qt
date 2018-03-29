/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COSTEXPLORERREQUEST_P_H
#define QTAWS_COSTEXPLORERREQUEST_P_H

#include "costexplorer_p.h"
#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class CostExplorerRequest;

class QTAWS_EXPORT CostExplorerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CostExplorerRequest::Action action; ///< CostExplorer action to be performed.
    QString apiVersion;        ///< CostExplorer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CostExplorer request (query string) parameters. @todo?

    CostExplorerRequestPrivate(const CostExplorerRequest::Action action, CostExplorerRequest * const q);
    CostExplorerRequestPrivate(const CostExplorerRequestPrivate &other, CostExplorerRequest * const q);

    static QString toString(const CostExplorerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CostExplorerRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
