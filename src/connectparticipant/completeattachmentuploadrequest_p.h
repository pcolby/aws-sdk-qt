/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_COMPLETEATTACHMENTUPLOADREQUEST_P_H
#define QTAWS_COMPLETEATTACHMENTUPLOADREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "completeattachmentuploadrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class CompleteAttachmentUploadRequest;

class QTAWS_EXPORT CompleteAttachmentUploadRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    CompleteAttachmentUploadRequestPrivate(const ConnectParticipantRequest::Action action,
                                   CompleteAttachmentUploadRequest * const q);
    CompleteAttachmentUploadRequestPrivate(const CompleteAttachmentUploadRequestPrivate &other,
                                   CompleteAttachmentUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteAttachmentUploadRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
