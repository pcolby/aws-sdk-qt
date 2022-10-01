// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHINFERENCEJOBREQUEST_H
#define QTAWS_CREATEBATCHINFERENCEJOBREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateBatchInferenceJobRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateBatchInferenceJobRequest : public PersonalizeRequest {

public:
    CreateBatchInferenceJobRequest(const CreateBatchInferenceJobRequest &other);
    CreateBatchInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchInferenceJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
