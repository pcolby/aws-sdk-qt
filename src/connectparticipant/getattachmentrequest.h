// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTACHMENTREQUEST_H
#define QTAWS_GETATTACHMENTREQUEST_H

#include "connectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class GetAttachmentRequestPrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT GetAttachmentRequest : public ConnectParticipantRequest {

public:
    GetAttachmentRequest(const GetAttachmentRequest &other);
    GetAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttachmentRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
