// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATEREQUEST_H
#define QTAWS_DELETEJOBTEMPLATEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class DeleteJobTemplateRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT DeleteJobTemplateRequest : public MediaConvertRequest {

public:
    DeleteJobTemplateRequest(const DeleteJobTemplateRequest &other);
    DeleteJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
