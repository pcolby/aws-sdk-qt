// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPEECHSYNTHESISTASKREQUEST_H
#define QTAWS_GETSPEECHSYNTHESISTASKREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class GetSpeechSynthesisTaskRequestPrivate;

class QTAWSPOLLY_EXPORT GetSpeechSynthesisTaskRequest : public PollyRequest {

public:
    GetSpeechSynthesisTaskRequest(const GetSpeechSynthesisTaskRequest &other);
    GetSpeechSynthesisTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSpeechSynthesisTaskRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
