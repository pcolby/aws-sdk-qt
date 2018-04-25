/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATEPRESETREQUEST_P_H
#define QTAWS_UPDATEPRESETREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "updatepresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdatePresetRequest;

class QTAWS_EXPORT UpdatePresetRequestPrivate : public MediaConvertRequestPrivate {

public:
    UpdatePresetRequestPrivate(const MediaConvertRequest::Action action,
                                   UpdatePresetRequest * const q);
    UpdatePresetRequestPrivate(const UpdatePresetRequestPrivate &other,
                                   UpdatePresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
