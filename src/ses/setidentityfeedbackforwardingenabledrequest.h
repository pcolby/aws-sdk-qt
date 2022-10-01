// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDREQUEST_H
#define QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityFeedbackForwardingEnabledRequestPrivate;

class QTAWSSES_EXPORT SetIdentityFeedbackForwardingEnabledRequest : public SesRequest {

public:
    SetIdentityFeedbackForwardingEnabledRequest(const SetIdentityFeedbackForwardingEnabledRequest &other);
    SetIdentityFeedbackForwardingEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityFeedbackForwardingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
