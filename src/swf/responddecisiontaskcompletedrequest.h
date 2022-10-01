// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDDECISIONTASKCOMPLETEDREQUEST_H
#define QTAWS_RESPONDDECISIONTASKCOMPLETEDREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RespondDecisionTaskCompletedRequestPrivate;

class QTAWSSWF_EXPORT RespondDecisionTaskCompletedRequest : public SwfRequest {

public:
    RespondDecisionTaskCompletedRequest(const RespondDecisionTaskCompletedRequest &other);
    RespondDecisionTaskCompletedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondDecisionTaskCompletedRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
