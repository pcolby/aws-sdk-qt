/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPLOADARCHIVEREQUEST_P_H
#define QTAWS_UPLOADARCHIVEREQUEST_P_H

#include "glacier_p.h"
#include "uploadarchiverequest.h"

namespace AWS {

namespace Glacier {

class UploadArchiveRequest;

class QTAWS_EXPORT UploadArchiveRequestPrivate : public GlacierPrivate {

public:
    UploadArchiveRequestPrivate(const Glacier::Action action,
                                   UploadArchiveRequest * const q);
    UploadArchiveRequestPrivate(const UploadArchiveRequestPrivate &other,
                                   UploadArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadArchiveRequest)

};

} // namespace Glacier
} // namespace AWS

#endif
