// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEECHSYNTHESISTASKSREQUEST_H
#define QTAWS_LISTSPEECHSYNTHESISTASKSREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class ListSpeechSynthesisTasksRequestPrivate;

class QTAWSPOLLY_EXPORT ListSpeechSynthesisTasksRequest : public PollyRequest {

public:
    ListSpeechSynthesisTasksRequest(const ListSpeechSynthesisTasksRequest &other);
    ListSpeechSynthesisTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSpeechSynthesisTasksRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
