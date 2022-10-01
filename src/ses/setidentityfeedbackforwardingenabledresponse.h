// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDRESPONSE_H
#define QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDRESPONSE_H

#include "sesresponse.h"
#include "setidentityfeedbackforwardingenabledrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityFeedbackForwardingEnabledResponsePrivate;

class QTAWSSES_EXPORT SetIdentityFeedbackForwardingEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityFeedbackForwardingEnabledResponse(const SetIdentityFeedbackForwardingEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityFeedbackForwardingEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityFeedbackForwardingEnabledResponse)
    Q_DISABLE_COPY(SetIdentityFeedbackForwardingEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
