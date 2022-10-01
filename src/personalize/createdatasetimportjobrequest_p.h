// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEDATASETIMPORTJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "createdatasetimportjobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetImportJobRequest;

class CreateDatasetImportJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateDatasetImportJobRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateDatasetImportJobRequest * const q);
    CreateDatasetImportJobRequestPrivate(const CreateDatasetImportJobRequestPrivate &other,
                                   CreateDatasetImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetImportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
