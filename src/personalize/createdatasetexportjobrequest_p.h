// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETEXPORTJOBREQUEST_P_H
#define QTAWS_CREATEDATASETEXPORTJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "createdatasetexportjobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetExportJobRequest;

class CreateDatasetExportJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateDatasetExportJobRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateDatasetExportJobRequest * const q);
    CreateDatasetExportJobRequestPrivate(const CreateDatasetExportJobRequestPrivate &other,
                                   CreateDatasetExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetExportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
