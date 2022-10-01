// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRESETREQUEST_H
#define QTAWS_GETPRESETREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class GetPresetRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT GetPresetRequest : public MediaConvertRequest {

public:
    GetPresetRequest(const GetPresetRequest &other);
    GetPresetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
