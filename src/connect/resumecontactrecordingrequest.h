// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECONTACTRECORDINGREQUEST_H
#define QTAWS_RESUMECONTACTRECORDINGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ResumeContactRecordingRequestPrivate;

class QTAWSCONNECT_EXPORT ResumeContactRecordingRequest : public ConnectRequest {

public:
    ResumeContactRecordingRequest(const ResumeContactRecordingRequest &other);
    ResumeContactRecordingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
