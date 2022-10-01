// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESETREQUEST_H
#define QTAWS_CREATEPRESETREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class CreatePresetRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT CreatePresetRequest : public MediaConvertRequest {

public:
    CreatePresetRequest(const CreatePresetRequest &other);
    CreatePresetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
