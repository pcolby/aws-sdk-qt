// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTATTACHMENTUPLOADREQUEST_H
#define QTAWS_STARTATTACHMENTUPLOADREQUEST_H

#include "connectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class StartAttachmentUploadRequestPrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT StartAttachmentUploadRequest : public ConnectParticipantRequest {

public:
    StartAttachmentUploadRequest(const StartAttachmentUploadRequest &other);
    StartAttachmentUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAttachmentUploadRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
