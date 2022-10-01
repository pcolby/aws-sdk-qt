// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEECHSYNTHESISTASKREQUEST_H
#define QTAWS_STARTSPEECHSYNTHESISTASKREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class StartSpeechSynthesisTaskRequestPrivate;

class QTAWSPOLLY_EXPORT StartSpeechSynthesisTaskRequest : public PollyRequest {

public:
    StartSpeechSynthesisTaskRequest(const StartSpeechSynthesisTaskRequest &other);
    StartSpeechSynthesisTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSpeechSynthesisTaskRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
