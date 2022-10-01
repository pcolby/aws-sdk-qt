// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRESETREQUEST_H
#define QTAWS_UPDATEPRESETREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdatePresetRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT UpdatePresetRequest : public MediaConvertRequest {

public:
    UpdatePresetRequest(const UpdatePresetRequest &other);
    UpdatePresetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
