// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORDECISIONTASKREQUEST_H
#define QTAWS_POLLFORDECISIONTASKREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class PollForDecisionTaskRequestPrivate;

class QTAWSSWF_EXPORT PollForDecisionTaskRequest : public SwfRequest {

public:
    PollForDecisionTaskRequest(const PollForDecisionTaskRequest &other);
    PollForDecisionTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForDecisionTaskRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
