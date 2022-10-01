// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETEXPORTJOBREQUEST_H
#define QTAWS_CREATEDATASETEXPORTJOBREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetExportJobRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateDatasetExportJobRequest : public PersonalizeRequest {

public:
    CreateDatasetExportJobRequest(const CreateDatasetExportJobRequest &other);
    CreateDatasetExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetExportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
