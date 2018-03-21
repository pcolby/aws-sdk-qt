/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTNOTEBOOKINSTANCESREQUEST_P_H
#define QTAWS_LISTNOTEBOOKINSTANCESREQUEST_P_H

#include "sagemaker_p.h"
#include "listnotebookinstancesrequest.h"

namespace AWS {

namespace SageMaker {

class ListNotebookInstancesRequest;

class QTAWS_EXPORT ListNotebookInstancesRequestPrivate : public SageMakerPrivate {

public:
    ListNotebookInstancesRequestPrivate(const SageMaker::Action action,
                                   ListNotebookInstancesRequest * const q);
    ListNotebookInstancesRequestPrivate(const ListNotebookInstancesRequestPrivate &other,
                                   ListNotebookInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotebookInstancesRequest)

};

} // namespace SageMaker
} // namespace AWS

#endif
