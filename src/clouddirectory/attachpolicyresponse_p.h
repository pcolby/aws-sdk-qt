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

#ifndef QTAWS_ATTACHPOLICYRESPONSE_P_H
#define QTAWS_ATTACHPOLICYRESPONSE_P_H

#include "clouddirectoryresponse.h"
#include "attachpolicyrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachPolicyResponse;

class QTAWS_EXPORT AttachPolicyResponsePrivate : public CloudDirectoryResponsePrivate {
    Q_OBJECT

public:

    AttachPolicyResponsePrivate(AttachPolicyResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachPolicyResponse)
    Q_DISABLE_COPY(AttachPolicyResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
