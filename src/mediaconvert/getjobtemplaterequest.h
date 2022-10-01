// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTEMPLATEREQUEST_H
#define QTAWS_GETJOBTEMPLATEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class GetJobTemplateRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT GetJobTemplateRequest : public MediaConvertRequest {

public:
    GetJobTemplateRequest(const GetJobTemplateRequest &other);
    GetJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
