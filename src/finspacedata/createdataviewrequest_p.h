// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAVIEWREQUEST_P_H
#define QTAWS_CREATEDATAVIEWREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "createdataviewrequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateDataViewRequest;

class CreateDataViewRequestPrivate : public FinspaceDataRequestPrivate {

public:
    CreateDataViewRequestPrivate(const FinspaceDataRequest::Action action,
                                   CreateDataViewRequest * const q);
    CreateDataViewRequestPrivate(const CreateDataViewRequestPrivate &other,
                                   CreateDataViewRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataViewRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
