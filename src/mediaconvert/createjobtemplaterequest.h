// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBTEMPLATEREQUEST_H
#define QTAWS_CREATEJOBTEMPLATEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class CreateJobTemplateRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT CreateJobTemplateRequest : public MediaConvertRequest {

public:
    CreateJobTemplateRequest(const CreateJobTemplateRequest &other);
    CreateJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
