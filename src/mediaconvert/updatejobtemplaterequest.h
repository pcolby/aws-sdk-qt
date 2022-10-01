// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBTEMPLATEREQUEST_H
#define QTAWS_UPDATEJOBTEMPLATEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdateJobTemplateRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT UpdateJobTemplateRequest : public MediaConvertRequest {

public:
    UpdateJobTemplateRequest(const UpdateJobTemplateRequest &other);
    UpdateJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
